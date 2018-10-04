
        
                def self.normalize_dn(dn)
          ::Gitlab::Auth::LDAP::DN.new(dn).to_normalized_s
        rescue ::Gitlab::Auth::LDAP::DN::FormatError => e
          Rails.logger.info('Returning original DN \'#{dn}\' due to error during normalization attempt: #{e.message}')
    
            # Expiration, revocation and scopes are verified in `validate_access_token!`
        oauth_token = OauthAccessToken.by_token(token)
        raise UnauthorizedError unless oauth_token
    
              relation.update_all(update)
        end
      end
    end
  end
end

    
            def initialize(badge)
          @entity = badge.entity
          @status = badge.status
        end
    
          def to_html
        link_to(image_tag(image_url, alt: title), link_url)
      end
    
          if @account_moderation_note.save
        redirect_to admin_account_path(@account_moderation_note.target_account_id), notice: I18n.t('admin.account_moderation_notes.created_msg')
      else
        @account          = @account_moderation_note.target_account
        @moderation_notes = @account.targeted_moderation_notes.latest
    
        def resource_params
      params.require(:email_domain_block).permit(:domain)
    end
  end
end

    
    class Api::PushController < Api::BaseController
  include SignatureVerification
    
    # Include LoggerSilence from ActiveSupport. This is needed to silent assets
# requests with `config.assets.quiet`, because the default silence method of
# the logging gem is no-op. See: https://github.com/TwP/logging/issues/11
Logging::Logger.send :alias_method, :local_level, :level
Logging::Logger.send :alias_method, :local_level=, :level=
Logging::Logger.send :include, LoggerSilence

    
      def down
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id
  end
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
    When /^I (?:like|unlike) the post '([^']*)' in the stream$/ do |post_text|
  like_stream_post(post_text)
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
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
        attr_writer :caller
    attr_writer :content
    attr_writer :selector
    
          opts.on('--update', 'Compile files or directories to CSS.',
                          'Locations are set like --watch.') do
        @options[:update] = true
      end
    
          PluginManager.ui.info('Install successful')
    rescue ::Bundler::BundlerError => e
      raise PluginManager::InstallError.new(e), 'An error occurred went installing plugins'
    ensure
      FileUtils.rm_rf(uncompressed_path) if uncompressed_path && Dir.exist?(uncompressed_path)
    end
    
      # Make sure we dont build this gem from a non jruby
  # environment.
  if RUBY_PLATFORM == 'java'
    gem.platform = 'java'
  else
    raise 'The logstash-core-api need to be build on jruby'
  end
end
