# For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
    config = File.expand_path '../lib/jekyll/mime.types', __dir__
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
          private
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        options[:attribution] = <<-HTML
      &copy; 2010&ndash;2018 Christian Johansen<br>
      Licensed under the BSD License.
    HTML
    
        def subpath_from(url, options = nil)
      self.class.parse(url).subpath_to(self, options)
    end
    
        # replace in the top-level selector
    # replace_in_selector('a {a: {a: a} } a {}', /a/, 'b') => 'b {a: {a: a} } b {}'
    def replace_in_selector(css, pattern, sub)
      # scan for selector positions in css
      s        = CharStringScanner.new(css)
      prev_pos = 0
      sel_pos  = []
      while (brace = s.scan_next(RULE_OPEN_BRACE_RE))
        pos = s.pos
        sel_pos << (prev_pos .. pos - 1)
        s.pos    = close_brace_pos(css, s.pos - 1) + 1
        prev_pos = pos
      end
      replace_substrings_at(css, sel_pos) { |s| s.gsub(pattern, sub) }
    end
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
    require 'rake/testtask'
Rake::TestTask.new do |t|
  t.libs << 'test'
  t.test_files = FileList['test/**/*_test.rb']
  t.verbose = true
end
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')