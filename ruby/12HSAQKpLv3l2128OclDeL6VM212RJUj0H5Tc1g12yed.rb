      def self.authors
        ['Liquidsoul', 'KrauseFx']
      end
    
          Dir[File.join(screens_path, '*')].sort.each do |language_folder|
        language = File.basename(language_folder)
        Dir[File.join(language_folder, '*.png')].sort.each do |screenshot|
          file_name = File.basename(screenshot)
          available_devices.each do |key_name, output_name|
            next unless file_name.include?(key_name)
            # This screenshot is from this device
    
            # Cleans up projects before writing.
        #
        def cleanup_projects(projects)
          projects.each do |project|
            [project.pods, project.support_files_group,
             project.development_pods, project.dependencies_group].each { |group| group.remove_from_project if group.empty? }
            project.sort(:groups_position => :below)
          end
        end
      end
    end
  end
end

    
        it 'complains if pod name begins with a period' do
      lambda { run_command('lib', 'create', '.HiddenPod') }.should.raise CLAide::Help
    end
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
          class << self
        alias escape_url escape
        public :escape_html
      end
    
      it 'accepts post requests with masked X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => masked_token)
    expect(last_response).to be_ok
  end
    
          expected_header = <<-END.chomp
rack.%2573ession=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
END
      expect(last_response.headers['Set-Cookie']).to eq(expected_header)
    end
  end
    
      it 'denies post form requests with wrong authenticity_token field' do
    post('/', {'authenticity_token' => bad_token}, 'rack.session' => session)
    expect(last_response).not_to be_ok
  end
    
          def upload_dest
        @upload_dest
      end
    
          attr_reader :name, :path
    
    def cloned_testpath(path)
  repo   = File.expand_path(testpath(path))
  path   = File.dirname(repo)
  cloned = File.join(path, self.class.name)
  FileUtils.rm_rf(cloned)
  Dir.chdir(path) do
    %x{git clone #{File.basename(repo)} #{self.class.name} 2>/dev/null}
  end
  cloned
end
    
        assert_match /Edit Page/,             last_response.body, ''Edit Page' link is blocked in compare template'
    assert_match /Revert Changes/,        last_response.body, ''Revert Changes' link is blocked in compare template'
  end
    
      test 'previews content on the first page of an empty wiki' do
    @path = cloned_testpath('examples/empty.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {})
    post '/preview', :content => 'abc', :format => 'markdown'
    assert last_response.ok?
  end
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end
    
          redirect to('/#{page.escaped_url_path}') unless page.nil?
    end