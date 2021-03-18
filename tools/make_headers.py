from pathlib import Path, PurePosixPath
from collections import defaultdict

include_root = Path('include')
sampapi_includes = include_root / 'sampapi'

includes = defaultdict(lambda: [])
for dir in sampapi_includes.iterdir():
    for path in dir.glob('**/*.h'):
        header_path = sampapi_includes / path.name
        include_str = str(PurePosixPath(path.relative_to(include_root)))
        includes[header_path].append(f'#include "{include_str}"\n')

for path in sampapi_includes.glob('*.h'):
    if path not in includes:
        print('[common]', path)

for path, inc_list in includes.items():
    with path.open('w') as f:
        f.write('#pragma once\n' + ''.join(inc_list))
