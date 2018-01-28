
        
          describe '.all' do
    it 'uses the client to fetch all keys' do
      mock_client_response(:list_keys, with: no_args) do
        [
          {
            canDownload: false,
            canRevoke: true,
            keyId: 'some-key-id',
            keyName: 'Test Key via fastlane',
            servicesCount: 2
          },
          {
            canDownload: true,
            canRevoke: true,
            keyId: 'B92NE4F7RG',
            keyName: 'Test Key via browser',
            servicesCount: 2
          }
        ]
      end
    
          {
          author: last_git_commit_formatted_with('%an'),
          message: last_git_commit_formatted_with('%B'),
          commit_hash: last_git_commit_formatted_with('%H'),
          abbreviated_commit_hash: last_git_commit_formatted_with('%h')
      }
    end
    
          def load_all_devices
        self.devices = []
    
          # Read-only path to the shell-escaped gradle script, suitable for use in shell commands
      attr_reader :escaped_gradle_path
    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: tag_url(@tag),
      type: :ordered,
      size: @tag.statuses.count,
      items: @statuses.map { |s| ActivityPub::TagManager.instance.uri_for(s) }
    )
  end
    
          format.json do
        render json: collection_presenter,
               serializer: ActivityPub::CollectionSerializer,
               adapter: ActivityPub::Adapter,
               content_type: 'application/activity+json'
      end
    end
  end
    
          expect(response).to redirect_to(settings_preferences_path)
      user.reload
      expect(user.locale).to eq 'en'
      expect(user.filtered_languages).to eq ['es', 'fr']
    end
    
          it 'creates mention for target account' do
        expect(account.mentions.count).to eq 1
      end
    end
    
    desc 'Initial setup for Octopress: copies the default theme into the path of Jekyll's generator. Rake install defaults to rake install[classic] to install a different theme run rake install[some_theme_name]'
task :install, :theme do |t, args|
  if File.directory?(source_dir) || File.directory?('sass')
    abort('rake aborted!') if ask('A theme is already installed, proceeding will overwrite existing files. Are you sure?', ['y', 'n']) == 'n'
  end
  # copy theme into working Jekyll directories
  theme = args.theme || 'classic'
  puts '## Copying '+theme+' theme into ./#{source_dir} and ./sass'
  mkdir_p source_dir
  cp_r '#{themes_dir}/#{theme}/source/.', source_dir
  mkdir_p 'sass'
  cp_r '#{themes_dir}/#{theme}/sass/.', 'sass'
  mkdir_p '#{source_dir}/#{posts_dir}'
  mkdir_p public_dir
end
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
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
    
      class PostFilters < Octopress::Hooks::Post
    def pre_render(post)
      OctopressFilters::pre_filter(post)
    end