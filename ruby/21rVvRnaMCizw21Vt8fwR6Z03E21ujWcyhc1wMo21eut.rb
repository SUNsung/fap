
        
          describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
          expect(@scheduler.scheduler_agent_jobs.map(&:scheduler_agent)).to eq([@agent2])
    end
    
      describe '#check' do
    it 'should check that initial run creates an event' do
      @checker.memory[:last_updated_at] = '2016-03-15T14:01:05+00:00'
      expect { @checker.check }.to change { Event.count }.by(1)
    end
  end
end

    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
          def initialize_from_record(record)
        @scope_name = Devise::Mapping.find_scope!(record)
        @resource   = instance_variable_set('@#{devise_mapping.name}', record)
      end
    
        alias :name :singular
    
          module ClassMethods
        # Create the cookie key using the record id and remember_token
        def serialize_into_cookie(record)
          [record.to_key, record.rememberable_value, Time.now.utc.to_f.to_s]
        end
    
          private
    
    
    
                  <ol start='<%= frame.lineno %>' class='context' id='<%= id %>'
                  onclick='toggle(<%= id %>);'>
                <li class='context-line' id='context-<%= id %>'><code><%=
                  h frame.context_line %></code></li>
              </ol>
    
    namespace :doc do
  task :readmes do
    Dir.glob 'lib/rack/protection/*.rb' do |file|
      excluded_files = %w[lib/rack/protection/base.rb lib/rack/protection/version.rb]
      next if excluded_files.include?(file)
      doc  = File.read(file)[/^  module Protection(\n)+(    #[^\n]*\n)*/m].scan(/^ *#(?!#) ?(.*)\n/).join('\n')
      file = 'doc/#{file[4..-4].tr('/_', '-')}.rdoc'
      Dir.mkdir 'doc' unless File.directory? 'doc'
      puts 'writing #{file}'
      File.open(file, 'w') { |f| f << doc }
    end
  end
    
          def warn(env, message)
        return unless options[:logging]
        l = options[:logger] || env['rack.logger'] || ::Logger.new(env['rack.errors'])
        l.warn(message)
      end
    
            self
      end
    
            def ignore_empty_blocks?
          cop_config['IgnoreEmptyBlocks']
        end
      end
    end
  end
end

    
      def to_s(format=nil)
    return super('NAME_FULLVERSION_ARCH.TYPE') if format.nil?
    return super(format)
  end
    
          prefix = ''
      if name.bytesize > 100 then
        parts = name.split('/', -1) # parts are never empty here
        name = parts.pop            # initially empty for names with a trailing slash ('foo/.../bar/')
        prefix = parts.join('/')    # if empty, then it's impossible to split (parts is empty too)
        while !parts.empty? && (prefix.bytesize > 155 || name.empty?)
          name = parts.pop + '/' + name
          prefix = parts.join('/')
        end