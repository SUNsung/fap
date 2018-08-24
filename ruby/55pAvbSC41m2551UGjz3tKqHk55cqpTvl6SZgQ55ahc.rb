
        
                  method_tag = \
            case method
            when 'get'
              html_options['method'] = 'get'
              ''
            when 'post', ''
              html_options['method'] = 'post'
              token_tag(authenticity_token, form_options: {
                action: html_options['action'],
                method: 'post'
              })
            else
              html_options['method'] = 'post'
              method_tag(method) + token_tag(authenticity_token, form_options: {
                action: html_options['action'],
                method: method
              })
            end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class CheckBox < Base #:nodoc:
        include Checkable
    
              add_default_name_and_id_for_value(tag_value, name_and_id)
          options.delete('index')
          options.delete('namespace')
          options['for'] = name_and_id['id'] unless options.key?('for')
    
          # Specify the layout to use for this class.
      #
      # If the specified layout is a:
      # String:: the String is the template name
      # Symbol:: call the method specified by the symbol
      # Proc::   call the passed Proc
      # false::  There is no layout
      # true::   raise an ArgumentError
      # nil::    Force default layout behavior with inheritance
      #
      # Return value of +Proc+ and +Symbol+ arguments should be +String+, +false+, +true+ or +nil+
      # with the same meaning as described above.
      # ==== Parameters
      # * <tt>layout</tt> - The layout to use.
      #
      # ==== Options (conditions)
      # * :only   - A list of actions to apply this layout to.
      # * :except - Apply this layout to all actions but this one.
      def layout(layout, conditions = {})
        include LayoutConditions unless conditions.empty?
    
        def render_template(event)
      info do
        message = '  Rendered #{from_rails_root(event.payload[:identifier])}'.dup
        message << ' within #{from_rails_root(event.payload[:layout])}' if event.payload[:layout]
        message << ' (#{event.duration.round(1)}ms)'
      end
    end
    
        private
    
          def user
        find_sessionless_user || find_user_from_warden
      end
    
          def to_asciidoc
        'image:#{image_url}[link=\'#{link_url}\',title=\'#{title}\']'
      end
    
            def entity
          'pipeline'
        end
    
            def key_text
          @entity.to_s
        end
    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
          with_index_lock do
        unlocked_reload
      end
    end
    
    module Vagrant
  module Plugin
    module V2
      # This is the superclass for all V2 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
    Given /^(?:|[tT]hat )?following user[s]?(?: exist[s]?)?:$/ do |table|
  table.hashes.each do |hash|
    if hash.has_key? 'username' and hash.has_key? 'email'
      step %{a user named '#{hash['username']}' with email '#{hash['email']}'}
    elsif hash.has_key? 'username'
      step %{a user with username '#{hash['username']}'}
    elsif hash.has_key? 'email'
      step %{a user with email '#{hash['email']}'}
    end
  end
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
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end