
        
          desc 'Run sass-spec tests against the local code.'
  task :spec do
    require 'yaml'
    sass_spec_options = YAML.load_file(scope('test/sass-spec.yml'))
    enabled = sass_spec_options.delete(:enabled)
    unless enabled
      puts 'SassSpec tests are disabled.'
      next
    end
    if ruby_version_at_least?('1.9.2')
      old_load_path = $:.dup
      begin
        $:.unshift(File.join(File.dirname(__FILE__), 'lib'))
        begin
          require 'sass_spec'
        rescue LoadError
          puts 'You probably forgot to run: bundle exec rake'
          raise
        end
        default_options = {
          :spec_directory => SassSpec::SPEC_DIR,
          :engine_adapter => SassEngineAdapter.new,
          :generate => false,
          :tap => false,
          :skip => false,
          :verbose => false,
          :filter => '',
          :limit => -1,
          :unexpected_pass => false,
          :nuke => false,
        }
        SassSpec::Runner.new(default_options.merge(sass_spec_options)).run || exit(1)
      ensure
        $:.replace(old_load_path)
      end
    else
      'Skipping sass-spec on ruby versions less than 1.9.2'
    end
  end
end
    
        # Wraps the given string in terminal escapes
    # causing it to have the given color.
    # If terminal escapes aren't supported on this platform,
    # just returns the string instead.
    #
    # @param color [Symbol] The name of the color to use.
    #   Can be `:red`, `:green`, or `:yellow`.
    # @param str [String] The string to wrap in the given color.
    # @return [String] The wrapped string.
    def color(color, str)
      raise '[BUG] Unrecognized color #{color}' unless COLORS[color]
    
          if @default_syntax == :sass
        opts.on('--scss',
                'Use the CSS-superset SCSS syntax.') do
          @options[:for_engine][:syntax] = :scss
        end
      else
        opts.on('--sass',
                'Use the indented Sass syntax.') do
          @options[:for_engine][:syntax] = :sass
        end
      end
    
      # fetch data
  fields = {
    :authors => `git shortlog -sn`.force_encoding('utf-8').scan(/[^\d\s].*/),
    :email   => ['mail@zzak.io', 'konstantin.haase@gmail.com'],
    :files   => %w(License README.md Rakefile Gemfile rack-protection.gemspec) + Dir['lib/**/*']
  }
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
      context 'called with one color' do
    it 'applies same color to all sides' do
      rule = 'border-color: #f00'
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-style: inset; ' +
                'border-right-style: none; ' +
                'border-left-style: double;'
      bad_rule = 'border-bottom-style: null;'
    
      context 'expands hover buttons' do
    it 'finds selectors' do
      list = @buttons_list.map { |input| '#{input}:hover' }
      list = list.join(', ')
      ruleset = 'content: #{list};'
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      rule = 'padding: 1px'