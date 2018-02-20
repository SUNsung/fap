        def content_tag_string(name, content, options, escape = true)
          tag_options = tag_options(options, escape) if options
          content     = ERB::Util.unwrapped_html_escape(content) if escape
          '<#{name}#{tag_options}>#{PRE_CONTENT_STRINGS[name]}#{content}</#{name}>'.html_safe
        end
    
          def aliases
        @aliases ||= Aliases.new join_root.each_with_index.map { |join_part, i|
          columns = join_part.column_names.each_with_index.map { |column_name, j|
            Aliases::Column.new column_name, 't#{i}_r#{j}'
          }
          Aliases::Table.new(join_part, columns)
        }
      end
    
        def env_for(url)
      Rack::MockRequest.env_for(url)
    end
  end
    
        @notification_setting = current_user.notification_settings_for(resource)
    @saved = @notification_setting.update_attributes(notification_setting_params)
    
      def all_projects(current_user)
    projects = []
    
    def list_login_items_for_app(app_path)
  out, err, status = Open3.capture3(
    '/usr/bin/osascript', '-e',
    'tell application \'System Events\' to get the name of every login item ' \
    'whose path contains \'#{File.basename(app_path)}\''
  )
  if status.exitstatus > 0
    $stderr.puts err
    exit status.exitstatus
  end
  puts out.gsub(', ', '\n')
end
    
          def handle_prompt_with_signed_in_user
        client_id = params[:client_id]
        if client_id
          auth = Api::OpenidConnect::Authorization.find_by_client_id_user_and_scopes(client_id,
                                                                                     current_user, params[:scope])
          if auth
            process_authorization_consent('true')
          else
            handle_params_error('interaction_required', 'User must already be authorized when `prompt` is `none`')
          end
        else
          handle_params_error('bad_request', 'Client ID is missing from request')
        end
      end
    
          rescue_from OpenIDConnect::ValidationFailed,
                  ActiveRecord::RecordInvalid, Api::OpenidConnect::Error::InvalidSectorIdentifierUri do |e|
        validation_fail_as_json(e)
      end
    
            # Removes the specified cache
        #
        # @param [Array<Hash>] cache_descriptors
        #        An array of caches to remove, each specified with the same
        #        hash as cache_descriptors_per_pod especially :spec_file and :slug
        #
        def remove_caches(cache_descriptors)
          cache_descriptors.each do |desc|
            UI.message('Removing spec #{desc[:spec_file]} (v#{desc[:version]})') do
              FileUtils.rm(desc[:spec_file])
            end
            UI.message('Removing cache #{desc[:slug]}') do
              FileUtils.rm_rf(desc[:slug])
            end
          end
        end
    
            def self.options
          [
            ['--template-url=URL', 'The URL of the git repo containing a ' \
                                  'compatible template'],
          ].concat(super)
        end
    
          def stages
        names = Dir[stage_definitions].map { |f| File.basename(f, '.rb') }
        assert_valid_stage_names(names)
        names
      end
    
      desc 'Revert server(s) to previous release.'
  task :reverting do
  end
    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
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
    
      def render(context)
    config_tag(context.registers[:site].config, @key, @tag, @classname)
  end
end
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)
    
      # @param block [Proc(event, data)] the callback proc passing the original event and the encoded event
  public
  def on_event(&block)
    @on_event = block
  end