
        
        # This is the version that ships with OS X 10.10, so be sure we test against it.
# At the same time, the 1.7.7 version won't install cleanly on Ruby > 2.2,
# so we use a fork that makes a trivial change to a macro invocation.
gem 'json', :git => 'https://github.com/segiddins/json.git', :branch => 'seg-1.7.7-ruby-2.2'
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
    desc 'Update configurations to support publishing to root or sub directory'
task :set_root_dir, :dir do |t, args|
  puts '>>> !! Please provide a directory, eg. rake config_dir[publishing/subdirectory]' unless args.dir
  if args.dir
    if args.dir == '/'
      dir = ''
    else
      dir = '/' + args.dir.sub(/(\/*)(.+)/, '\\2').sub(/\/$/, '');
    end
    rakefile = IO.read(__FILE__)
    rakefile.sub!(/public_dir(\s*)=(\s*)([''])[\w\-\/]*['']/, 'public_dir\\1=\\2\\3public#{dir}\\3')
    File.open(__FILE__, 'w') do |f|
      f.write rakefile
    end
    compass_config = IO.read('config.rb')
    compass_config.sub!(/http_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_path\\1=\\2\\3#{dir}/\\3')
    compass_config.sub!(/http_images_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_images_path\\1=\\2\\3#{dir}/images\\3')
    compass_config.sub!(/http_fonts_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_fonts_path\\1=\\2\\3#{dir}/fonts\\3')
    compass_config.sub!(/css_dir(\s*)=(\s*)([''])[\w\-\/]*['']/, 'css_dir\\1=\\2\\3public#{dir}/stylesheets\\3')
    File.open('config.rb', 'w') do |f|
      f.write compass_config
    end
    jekyll_config = IO.read('_config.yml')
    jekyll_config.sub!(/^destination:.+$/, 'destination: public#{dir}')
    jekyll_config.sub!(/^subscribe_rss:\s*\/.+$/, 'subscribe_rss: #{dir}/atom.xml')
    jekyll_config.sub!(/^root:.*$/, 'root: /#{dir.sub(/^\//, '')}')
    File.open('_config.yml', 'w') do |f|
      f.write jekyll_config
    end
    rm_rf public_dir
    mkdir_p '#{public_dir}#{dir}'
    puts '## Site's root directory is now '/#{dir.sub(/^\//, '')}' ##'
  end
end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
      # Checks for excerpts (helpful for template conditionals)
  def has_excerpt(input)
    input =~ /<!--\s*more\s*-->/i ? true : false
  end
    
          unless file.file?
        return 'File #{file} could not be found'
      end