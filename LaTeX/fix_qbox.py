from pathlib import Path
import re
p = Path('fpp_codes.tex')
text = p.read_text(encoding='utf-8')
text = re.sub(r'\\qbox\{([^}]*)\}\{', lambda m: f'\\begin{{qbox}}{{{m.group(1)}}}', text)
# Replace closing lines that are just } with \end{qbox}, but only if not already followed by \end{qbox}
text = re.sub(r'\n}\n(?!\\end\{qbox\})', r'\n\\end{qbox}\n', text)
p.write_text(text, encoding='utf-8')
print('Done')
