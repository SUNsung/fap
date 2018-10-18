
        
          all_files       = `git ls-files -z`.split('\x0')
  s.files         = all_files.grep(%r!^(exe|lib|rubocop)/|^.rubocop.yml$!)
  s.executables   = all_files.grep(%r!^exe/!) { |f| File.basename(f) }
  s.bindir        = 'exe'
  s.require_paths = ['lib']
    
            def setup
          @config['syntax_highlighter'] ||= highlighter
          @config['syntax_highlighter_opts'] ||= {}
          @config['coderay'] ||= {} # XXX: Legacy.
          modernize_coderay_config
          make_accessible
        end
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
    (allow file-write*
  (literal
    '/dev/dtracehelper'
    '/dev/null'
  )
  (regex
    #'^<%= Pod::Config.instance.project_root %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
    #'^/Users/[^.]+/Library/Caches/CocoaPods/*'
    #'^/dev/tty'
    #'^/private/var'
  )
)
    
    module Pod
  class Command
    class Env < Command
      self.summary = 'Display pod environment'
      self.description = 'Display pod environment.'