
        
        When /^I have user with username '([^']*)' in an aspect called '([^']*)'$/ do |username, aspect|
  user = User.find_by_username(username)
  contact = @me.reload.contact_for(user.person)
  contact.aspects << @me.aspects.find_by_name(aspect)
end
    
    module NavigationHelpers
  def path_to(page_name)
    case page_name
    when /^person_photos page$/
      person_photos_path(@me.person)
    when /^the home(?: )?page$/
      stream_path
    when /^the mobile path$/
      force_mobile_path
    when /^the user applications page$/
      api_openid_connect_user_applications_path
    when /^the tag page for '([^\']*)'$/
      tag_path(Regexp.last_match(1))
    when /^its ([\w ]+) page$/
      send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path', @it)
    when /^the mobile ([\w ]+) page$/
      public_send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path', format: 'mobile')
    when /^the ([\w ]+) page$/
      public_send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path')
    when /^my edit profile page$/
      edit_profile_path
    when /^my profile page$/
      person_path(@me.person)
    when /^my acceptance form page$/
      invite_code_path(InvitationCode.first)
    when /^the requestors profile$/
      person_path(Request.where(recipient_id: @me.person.id).first.sender)
    when /^'([^\']*)''s page$/
      p = User.find_by_email(Regexp.last_match(1)).person
      {path:         person_path(p),
       # '#diaspora_handle' on desktop, '.description' on mobile
       special_elem: {selector: '#diaspora_handle, .description', text: p.diaspora_handle}
      }
    when /^'([^\']*)''s photos page$/
      p = User.find_by_email(Regexp.last_match(1)).person
      person_photos_path p
    when /^my account settings page$/
      edit_user_path
    when /^forgot password page$/
      new_user_password_path
    when %r{^'(/.*)'}
      Regexp.last_match(1)
    else
      raise 'Can't find mapping from \'#{page_name}\' to a path.'
    end
  end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
    module LogStash module PluginManager
  class SpecificationHelpers
    WILDCARD = '*'
    WILDCARD_INTO_RE = '.*'
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
      let(:unordered_config_parts) { ordered_config_parts.shuffle }
  let(:settings) { LogStash::SETTINGS }
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
          def remove_page_extentions(page_path)
        Gollum::Markup.formats.values.each do |format|
          page_path = page_path.gsub(/\.#{format[:regexp]}$/, '')
        end
        return page_path
      end
    
          def use_identicon
        @page.wiki.user_icons == 'identicon'
      end
    
    # Commit file to wiki, overwriting previous versions of that file
def commit_test_file(wiki, dir, filename, ext, content)
  committer = Gollum::Committer.new(wiki, :message => 'Added testfile', :parent  => wiki.repo.head.commit)
  committer.add_to_index(dir, filename, ext, content, true)
    committer.after_commit do |committer, sha|
      wiki.clear_cache
      committer.update_working_dir(dir, filename, ext)
    end
  committer.commit
end

    
      test 'create sets the correct path for a relative path subdirectory' do
    dir  = 'foodir'
    name = '#{dir}/bar'
    get '/create/#{name}'
    assert_match(/\/#{dir}/, last_response.body)
    assert_no_match(/[^\/]#{dir}/, last_response.body)
  end
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
    desc 'Build gem'
task :build => :gemspec do
  sh 'mkdir -p pkg'
  sh 'gem build #{gemspec_file}'
  sh 'mv #{gem_file} pkg'
end
    
      s.require_paths = %w[lib]
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
      # Replaces relative urls with full urls
  def expand_urls(input, url='')
    url ||= '/'
    input.gsub /(\s+(href|src|poster)\s*=\s*['|']{1})(\/[^\/>]{1}[^\''>]*)/ do
      $1+url+$3
    end
  end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
          def self.default_generator_root
        File.dirname(__FILE__)
      end
    
    
    
          def initialize_copy(copy)
        copy.instance_variable_set(:@entries, entries.dup)
      end
    
        def hostname
      ENV['DYNO'] || Socket.gethostname
    end
    
          def enable(*opts)
        opts.each {|key| set(key, true) }
      end