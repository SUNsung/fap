
        
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
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
          delete :destroy, params: {post_id: @message.id, id: like2.id}, format: :json
      expect(response.status).to eq(404)
      expect(response.body).to eq(I18n.t('likes.destroy.error'))
      expect(Like.count).to eq(like_count)
    end
  end
end

    
      desc <<END
Run a profile of sass.
  TIMES=n sets the number of runs. Defaults to 1000.
  FILE=str sets the file to profile. Defaults to 'complex'.
  OUTPUT=str sets the ruby-prof output format.
    Can be Flat, CallInfo, or Graph. Defaults to Flat. Defaults to Flat.
END
  task :profile do
    times  = (ENV['TIMES'] || '1000').to_i
    file   = ENV['FILE']
    
          # @param cache_location [String] see \{#cache\_location}
      def initialize(cache_location)
        @cache_location = cache_location
      end
    
          # @see Base#key
      def key(name, options)
        [self.class.name + ':' + File.dirname(File.expand_path(name)),
         File.basename(name)]
      end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end
