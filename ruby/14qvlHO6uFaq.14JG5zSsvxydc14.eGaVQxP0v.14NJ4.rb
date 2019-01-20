
        
                  def tag_name(multiple = false, index = nil)
            # a little duplication to construct less strings
            case
            when @object_name.empty?
              '#{sanitized_method_name}#{multiple ? '[]' : ''}'
            when index
              '#{@object_name}[#{index}][#{sanitized_method_name}]#{multiple ? '[]' : ''}'
            else
              '#{@object_name}[#{sanitized_method_name}]#{multiple ? '[]' : ''}'
            end
          end
    
            private
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class Label < Base # :nodoc:
        class LabelBuilder # :nodoc:
          attr_reader :object
    
            layout_definition = \
          case _layout
          when String
            _layout.inspect
          when Symbol
            <<-RUBY
              #{_layout}.tap do |layout|
                return #{default_behavior} if layout.nil?
                unless layout.is_a?(String) || !layout
                  raise ArgumentError, 'Your layout method :#{_layout} returned \#{layout}. It ' \
                    'should have returned a String, false, or nil'
                end
              end
            RUBY
          when Proc
            define_method :_layout_from_proc, &_layout
            protected :_layout_from_proc
            <<-RUBY
              result = _layout_from_proc(#{_layout.arity == 0 ? '' : 'self'})
              return #{default_behavior} if result.nil?
              result
            RUBY
          when false
            nil
          when true
            raise ArgumentError, 'Layouts must be specified as a String, Symbol, Proc, false, or nil'
          when nil
            name_clause
          end
    
          []
    end
    
    require 'rubygems'
require 'rake'
require 'rdoc'
require 'date'
require 'yaml'
    
                # stream_file_data would free us from keeping livereload.js in memory
            # but JRuby blocks on that call and never returns
            send_data(reload_body)
            close_connection_after_writing
          else
            body = 'This port only serves livereload.js over HTTP.\n'
            headers = [
              'HTTP/1.1 400 Bad Request',
              'Content-Type: text/plain',
              'Content-Length: #{body.bytesize}',
              '',
              '',
            ].join('\r\n')
            send_data(headers)
            send_data(body)
            close_connection_after_writing
          end
        end
        # rubocop:enable Metrics/MethodLength
      end
    end
  end
end

    
    module Jekyll
  module Deprecator
    extend self
    
            lounge.topic_id = post.topic.id
        unless lounge.save
          puts lounge.errors.full_messages
          puts 'Failed to set the lounge description topic!'
        end
    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
      # Helper for use after calling send_*_instructions methods on a resource.
  # If we are in paranoid mode, we always act as if the resource was valid
  # and instructions were sent.
  def successfully_sent?(resource)
    notice = if Devise.paranoid
      resource.errors.clear
      :send_paranoid_instructions
    elsif resource.errors.empty?
      :send_instructions
    end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
              providers
        end
    
            # This method will split the argv given into three parts: the
        # flags to this command, the subcommand, and the flags to the
        # subcommand. For example:
        #
        #     -v status -h -v
        #
        # The above would yield 3 parts:
        #
        #     ['-v']
        #     'status'
        #     ['-h', '-v']
        #
        # These parts are useful because the first is a list of arguments
        # given to the current command, the second is a subcommand, and the
        # third are the commands given to the subcommand.
        #
        # @return [Array] The three parts.
        def split_main_and_subcommand(argv)
          # Initialize return variables
          main_args   = nil
          sub_command = nil
          sub_args    = []
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Machine] machine Access to the machine that is being
        #   validated.
        # @return [Hash]
        def validate(machine)
          return { self.to_s => _detected_errors }
        end
    
            # This returns all the config classes for the various provisioners.
        #
        # @return [Registry]
        def provisioner_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provisioner])
            end
          end
        end
    
      it 'accepts a negative seed' do
    srand(-17)
    srand.should == -17
  end
    
      it 'does not append line-end if last character is line-end' do
    lambda {
      $VERBOSE = true
      warn('this is some simple text with line-end\n')
    }.should output(nil, 'this is some simple text with line-end\n')
  end
    
      url 'http://swupdl.adobe.com/updates/oobe/aam20/mac/AdobeLightroom-#{version.major}.0/#{version}/setup.dmg'
  name 'Adobe Photoshop Lightroom'
  homepage 'https://www.adobe.com/products/photoshop-lightroom.html'
    
        private
    
            safe?(env) ||
          valid_token?(session, env['HTTP_X_CSRF_TOKEN']) ||
          valid_token?(session, Request.new(env).params[options[:authenticity_param]]) ||
          ( options[:allow_if] && options[:allow_if].call(env) )
      end
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
      it 'should not override the header if already set' do
    mock_app with_headers('Content-Security-Policy' => 'default-src: none')
    expect(get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']).to eq('default-src: none')
  end
end

    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
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
    
      # Condenses multiple spaces and tabs into a single space
  def condense_spaces(input)
    input.gsub(/\s{2,}/, ' ')
  end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)

    
    # Use this to fill in an entire form with data from a table. Example:
#
#   When I fill in the following:
#     | Account Number | 5002       |
#     | Expiry date    | 2009-11-01 |
#     | Note           | Nice guy   |
#     | Wants Email?   |            |
#
# TODO: Add support for checkbox, select og option
# based on naming conventions.
#
When /^(?:|I )fill in the following:$/ do |fields|
  fields.rows_hash.each do |name, value|
    When %{I fill in '#{name}' with '#{value}'}
  end
end
    
    Before do
  gemfile = ENV['BUNDLE_GEMFILE'].to_s
  ENV['BUNDLE_GEMFILE'] = File.join(Dir.pwd, gemfile) unless gemfile.start_with?(Dir.pwd)
  @framework_version = nil
end
    
      argument :attachment_names, :required => true, :type => :array, :desc => 'The names of the attachment(s) to add.',
           :banner => 'attachment_one attachment_two attachment_three ...'
    
        def self.names_for(klass)
      instance.names_for(klass)
    end