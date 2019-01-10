
        
        require 'action_view/helpers/tags/placeholderable'
    
        # Controls whether an action should be rendered using a layout.
    # If you want to disable any <tt>layout</tt> settings for the
    # current action so that it is rendered without a layout then
    # either override this method in your controller to return false
    # for that action or set the <tt>action_has_layout</tt> attribute
    # to false before rendering.
    def action_has_layout?
      @_action_has_layout
    end
    
        # Main render entry point shared by Action View and Action Controller.
    def render(context, options)
      if options.key?(:partial)
        render_partial(context, options)
      else
        render_template(context, options)
      end
    end
    
    module BuildEnvironmentDSL
  def env(*settings)
    @env ||= BuildEnvironment.new
    @env.merge(settings)
  end
end
    
          begin
        result = Formulary.factory(query).name
      rescue FormulaUnavailableError
        result = search_tap(user, repo, name)
      end
    
          # Reads an integer from the cache, or returns nil if no value was found.
      #
      # See Caching.read for more information.
      def self.read_integer(raw_key, timeout: TIMEOUT)
        value = read(raw_key, timeout: timeout)
    
        not_same_pipeline_id = described_class.new(source, :another_pipeline, unordered_config_parts, settings)
    expect(subject).not_to eq(not_same_pipeline_id)
  end
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
      let(:cop_config) { { 'EnforcedStyle' => 'symmetrical' } }
    
    shared_examples_for 'multiline literal brace layout method argument' do
  include MultilineLiteralBraceHelper
    
    module Jekyll
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end