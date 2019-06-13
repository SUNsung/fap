
        
        module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
            css('.status-badge').each do |node|
          node.name = 'code'
          node.content = node.content.strip
          node.remove_attribute('class')
        end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
        def extract_to_dir(unpack_dir, basename:, verbose:)
      system_command! AIR_APPLICATION_INSTALLER,
                      args:    ['-silent', '-location', unpack_dir, path],
                      verbose: verbose
    end
  end
end

    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
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

    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
        it 'marks a notification as unread if it is told to' do
      note = FactoryGirl.create(:notification)
      expect(Notification).to receive(:where).and_return([note])
      expect(note).to receive(:set_read_state).with(false)
      get :update, params: {id: note.id, set_unread: 'true'}, format: :json
    end
    
          it 'returns a 404 for a post not visible to the user' do
        sign_in(eve, scope: :user)
        expect {
          get :index, params: {post_id: @post.id}, format: :json
        }.to raise_error(ActiveRecord::RecordNotFound)
      end
    
          it 'succeeds' do
        put :update, params: {id: 42, post_id: @status.id}, format: :js
        expect(response).to be_success
      end
    
        describe 'other streams' do
      it 'redirects to the login page' do
        %i[activity followed_tags liked mentioned multi].each do |stream_path|
          get stream_path
          expect(response).to be_redirect
          expect(response).to redirect_to new_user_session_path
        end
      end
    end
  end
end

    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
      describe '.token' do
    it 'returns a unique masked version of the authenticity token' do
      expect(Rack::Protection::AuthenticityToken.token(session)).not_to eq(masked_token)
    end
    
        # Extract the path string that Gollum::Wiki expects
    def extract_path(file_path)
      return nil if file_path.nil?
      last_slash = file_path.rindex('/')
      if last_slash
        file_path[0, last_slash]
      end
    end
    
    RSpec.describe JSFiddleTag, type: :liquid_template do
  describe '#link' do
    let(:jsfiddle_link) { 'http://jsfiddle.net/link2twenty/v2kx9jcd' }
    let(:jsfiddle_link_with_custom_tabs) { 'http://jsfiddle.net/link2twenty/v2kx9jcd result,html,css' }