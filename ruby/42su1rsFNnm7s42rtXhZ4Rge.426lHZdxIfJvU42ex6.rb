
        
        DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
            parsed_expr = parse_expression(expression)
        @context.stack do
          groups = input.group_by do |item|
            @context[variable] = item
            parsed_expr.render(@context)
          end
          grouped_array(groups)
        end
      end
    
    module Scheduler
    
          theme.destroy!
    
        it 'returns a label 'Yes' if a given agent is working' do
      stub(@agent).working? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Yes'
    end
    
              @bar3 = Agents::DotBar.new(name: 'bar3').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @bar2
            agent.save!
          },
        ]
        @foo.reload
        @bar2.reload
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
          AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at.to_i).to be_within(2).of(Time.now.to_i)
    end
    
      describe '#working?' do
    it 'it is working when at least one event was emitted' do
      expect(@checker).not_to be_working
      @checker.memory[:last_event] = '2014-04-17T10:25:31.000+02:00'
      @checker.check
      expect(@checker.reload).to be_working
    end
  end
end

    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          def remove_domain_from_uri(uri)
        [uri.path.sub(/\A\/+/, '/'), uri.query].compact.join('?')
      end
    
        def self.find_by_path!(path, path_type=:fullpath)
      Devise.mappings.each_value { |m| return m if path.include?(m.send(path_type)) }
      raise 'Could not find a valid mapping for path #{path.inspect}'
    end
    
          devise_modules_hook! do
        include Devise::Models::Authenticatable
    
          def self.required_fields(klass)
        []
      end
    
      gem 'danger'
end
    
          def executable_path
        <<-EOS
### Installation Source
    
      def delete_target_file?
    return true if overwrite?
    puts('File #{target_file} exist, do you want to overwrite it? (Y/N)')
    ( 'y' == STDIN.gets.strip.downcase ? true : false)
  end
    
        puts('No plugin updated') if update_count.zero?
  end
    
      let(:unordered_config_parts) { ordered_config_parts.shuffle }
  let(:settings) { LogStash::SETTINGS }
    
      namespace :acceptance do
    desc 'Run all acceptance'
    task :all do
      exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/**/*_spec.rb']]))
    end
    
              it 'fails when installing a non logstash plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install  bundler')
            expect(command).not_to install_successfully
          end
    
            def correct(processed_source, node,
                    previous_declaration, comments_as_separators)
          @processed_source = processed_source
          @comments_as_separators = comments_as_separators
    
                1.upto(3) do |i|
              next if !arguments[i] || arguments[i].hash_type?
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end