
        
              #
    
            def connect(websocket, handshake)
          @connections_count += 1
          if @connections_count == 1
            message = 'Browser connected'
            message += ' over SSL/TLS' if handshake.secure?
            Jekyll.logger.info 'LiveReload:', message
          end
          websocket.send(
            JSON.dump(
              :command    => 'hello',
              :protocols  => ['http://livereload.com/protocols/official-7'],
              :serverName => 'jekyll'
            )
          )
    
              page.objects.each do |object|
            next if already_imported?(object)
    
              user = Representation::User.from_api_response(note.user) if note.user
          hash = {
            noteable_type: noteable_type,
            noteable_id: matches[:iid].to_i,
            author: user,
            note: note.body,
            created_at: note.created_at,
            updated_at: note.updated_at,
            github_id: note.id
          }
    
          def action_for_grape(env)
        endpoint = env[ENDPOINT_KEY]
        route = endpoint.route rescue nil
    
      class ShareVisibility < ApplicationRecord
  end
    
      class Notification < ApplicationRecord
  end
    
    When /^I toggle all nsfw posts$/ do
  all('a.toggle_nsfw_state').each &:click
end
    
    RSpec::Matchers.define :have_path do |expected|
  match do |actual|
    await_condition { actual.current_path == expected }
  end
    
      def confirm_on_page(page_name)
    if page_name == 'my profile page'
      expect(page).to have_path_in([person_path(@me.person), user_profile_path(@me.username)])
    else
      expect(page).to have_path(path_to(page_name))
    end
  end
end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
          it 'returns a 404 for a post not visible to the user' do
        sign_in(eve, scope: :user)
        expect {
          get :index, params: {post_id: @post.id}, format: :json
        }.to raise_error(ActiveRecord::RecordNotFound)
      end
    
    Given /^I run a paperclip generator to add a paperclip '([^']*)' to the '([^']*)' model$/ do |attachment_name, model_name|
  step %[I successfully run `rails generate paperclip #{model_name} #{attachment_name}`]
end
    
    When /^(?:|I )fill in '([^']*)' for '([^']*)'$/ do |value, field|
  fill_in(field, :with => value)
end
    
      # Provides configurability to Paperclip. The options available are:
  # * whiny: Will raise an error if Paperclip cannot process thumbnails of
  #   an uploaded image. Defaults to true.
  # * log: Logs progress to the Rails log. Uses ActiveRecord's logger, so honors
  #   log levels, etc. Defaults to true.
  # * command_path: Defines the path at which to find the command line
  #   programs if they are not visible to Rails the system's search path. Defaults to
  #   nil, which uses the first executable found in the user's search path.
  # * use_exif_orientation: Whether to inspect EXIF data to determine an
  #   image's orientation. Defaults to true.
  def self.options
    @options ||= {
      command_path: nil,
      content_type_mappings: {},
      log: true,
      log_command: true,
      read_timeout: nil,
      swallow_stderr: true,
      use_exif_orientation: true,
      whiny: true,
      is_windows: Gem.win_platform?
    }
  end
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
        private
    
    # Set some attributes
package.name = 'my-service'
package.version = '1.0'
    
        def validate
      # Make sure the user has passed '-s' and '-t' flags
      mandatory(@command.input_type,
                'Missing required -s flag. What package source did you want?')
      mandatory(@command.output_type,
                'Missing required -t flag. What package output did you want?')
    
          # Move pkginfo to the front, if it exists.
      for i in (0..entries.length)
        if(entries[i] == '.PKGINFO')
          entries[i] = entries[0]
          entries[0] = '.PKGINFO'
          break
        end
      end
    
      def to_s(format=nil)
    return super(format.nil? ? 'NAME-VERSION.EXTENSION' : format)
  end # def to_s
    
      def parse_install_script(path)
    global_lines = []
    look_for = Set.new(['pre_install', 'post_install',
                        'pre_upgrade', 'post_upgrade',
                        'pre_remove', 'post_remove'])
    functions = {}
    look_for.each do |fname|
      functions[fname] = []
    end
    
      def output(output_path)
    output_check(output_path)
    
      # Output a zipfile.
  def output(output_path)
    output_check(output_path)
    realpath = Pathname.new(output_path).realdirpath.to_s
    ::Dir.chdir(staging_path) do
      safesystem('zip', '-9r', realpath, '.')
    end
  end # def output
end # class FPM::Package::Tar
