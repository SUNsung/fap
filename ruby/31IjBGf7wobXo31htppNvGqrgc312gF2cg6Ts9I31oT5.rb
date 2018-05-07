  </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
      private
    
      private
    
        registration
  end
    
            # With reconfirmable, notify the original email when the user first
        # requests the email change, instead of when the change is confirmed.
        def send_email_changed_notification?
          if self.class.reconfirmable
            self.class.send_email_changed_notification && reconfirmation_required?
          else
            super
          end
        end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
    ###
### methods
###
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
    profile = Profile.new
# puts profile.generate
command = ['/usr/bin/sandbox-exec', '-p', profile.generate, profile.pod_bin, *ARGV]
exec(*command)

    
          def stages
        names = Dir[stage_definitions].map { |f| File.basename(f, '.rb') }
        assert_valid_stage_names(names)
        names
      end
    
    describe Capistrano::Application do
  it 'provides a --trace option which enables SSHKit/NetSSH trace output'
    
        def possible_types
      MIME::Types.type_for(@filepath).collect(&:content_type)
    end
    
        # Gives a Geometry representing the given height and width
    def initialize(width = nil, height = nil, modifier = nil)
      if width.is_a?(Hash)
        options = width
        @height = options[:height].to_f
        @width = options[:width].to_f
        @modifier = options[:modifier]
        @orientation = options[:orientation].to_i
      else
        @height = height.to_f
        @width  = width.to_f
        @modifier = modifier
      end
    end
    
        # Returns the Rails.env constant.
    def rails_env attachment, style_name
      Rails.env
    end
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end

    
              @subject.send(@attachment_name).post_processing = false
          @subject.send(@attachment_name).assign(file)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_file_size'].blank?
        ensure
          @subject.send(@attachment_name).post_processing = true
        end
    
        def clear_processors!
      @known_processors.try(:clear)
    end
    
          def failure_message
        failure_message_helper
      end
    
        native.xpath(form_elements_xpath).map do |field|
      case field.name
      when 'input'
        add_input_param(field, params)
      when 'select'
        add_select_param(field, params)
      when 'textarea'
        add_textarea_param(field, params)
      end
    end
    merge_param!(params, button[:name], button[:value] || '') if button[:name]
    
          def drag_to(element)
        raise NotImplementedError
      end
    
          ##
      # Checks if the page has the given title.
      #
      # @macro title_query_params
      # @return [Boolean]
      #
      def has_title?(title, **options)
        assert_title(title, options)
      rescue Capybara::ExpectationNotMet
        return false
      end
    
          ##
      #
      # An XPath expression describing where on the page the element can be found
      #
      # @return [String]      An XPath expression
      #
      def path
        native.path
      end
    
        @current_scheme = new_uri.scheme
    @current_host = new_uri.host
    @current_port = new_uri.port
    
            def default
          @options[:default]
        end
    
          ##
      #
      # Right Click the Element
      #
      # @macro click_modifiers
      # @return [Capybara::Node::Element]  The element
      def right_click(*keys, **offset)
        synchronize { base.right_click(keys, offset) }
        self
      end
    
      def flash_now(type, message, options = {})
    respond_to do |wants|
      wants.html do
        flash.now[type] = message
        if options[:render_action]
          render options[:render_action]
        end
      end
      wants.json { render :json => {:flash => {type => message}} }
    end
  end
    
      def add_organization_to_page_title
    page_title << organization.name
  end
    
      def destroy
    @credential.destroy
    redirect_to_with_json [organization, @server, :credentials]
  end
    
    end

    
      private