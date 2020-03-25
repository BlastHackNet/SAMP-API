from pathlib import Path, PurePosixPath


base_path = Path('sampapi')
src_path = base_path / 'src'

def add_include(header_path, include_path):
    header_exists = header_path.exists()
    with open(header_path, 'a') as f:
        if not header_exists:
            f.write('#pragma once\n\n')
        include_str = str(PurePosixPath(include_path.relative_to(base_path)))
        f.write(f'#include "{include_str}"\n')

for f in base_path.glob('*.h'):
    f.unlink()

add_include(base_path / 'sampapi.h', src_path / 'common/sampapi.h')
for path in src_path.glob('**/*.h'):
    if path.name == 'sampapi.h':
        continue
    header_path = base_path / path.name
    add_include(header_path, path)
