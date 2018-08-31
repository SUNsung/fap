  describe 'local topic link' do
    
    invalids = []
Parallel.each(links, in_threads: 4) do |link|
  href = link.attribute('href').to_s
  begin
    case check_link(URI.join(BASE_URI, href))
    when (200...300)
      putc('.')
    when (300..302)
      putc('w')
    end
  rescue => e
    putc('F')
    invalids << '#{href} (reason: #{e.message})'
  end
end
    
      def resource_params
    params.fetch(resource_name, {})
  end
    
                def current_#{group_name}(favourite=nil)
              mappings = #{mappings}
              mappings.unshift mappings.delete(favourite.to_sym) if favourite
              mappings.each do |mapping|
                current = warden.authenticate(scope: mapping)
                return current if current
              end
              nil
            end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
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
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
        # Try retrieving the URL options from the parent controller (usually
    # ApplicationController). Instance methods are not supported at the moment,
    # so only the class-level attribute is used.
    def self.default_url_options(*args)
      if defined?(Devise.parent_controller.constantize)
        Devise.parent_controller.constantize.try(:default_url_options) || {}
      else
        {}
      end
    end
    
              private
    
                res = checksum + encrypted
            res
          end
        end
      end
    end
  end
end
    
              # Decodes the etype field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Integer>]
          def decode_etype(input)
            encs = []
            input.value[0].value.each do |enc|
              encs << enc.value.to_i
            end
            encs
          end
    
              # Decodes the cusec field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_cusec(input)
            input.value[0].value
          end
    
              private
    
    (allow file-read-metadata)
(allow file-read*
  ; This is currenly only added because using `xcodebuild` to build a resource
  ; bundle target starts a FSEvents stream on `/`. No idea why that would be
  ; needed, but for now it doesn’t seem like a real problem.
  (literal '/')
  (regex
    ; TODO see if we can restrict this more, but it's going to be hard
    #'^/Users/[^.]+/*'
    ;#'^/Users/[^.]+/.netrc'
    ;#'^/Users/[^.]+/.gemrc'
    ;#'^/Users/[^.]+/.gem/*'
    ;#'^/Users/[^.]+/Library/.*'
    #'^/Library/*'
    #'^/System/Library/*'
    #'^/usr/lib/*'
    #'^/usr/share/*'
    #'^/private/*'
    #'^/dev/*'
    #'^<%= ruby_prefix %>'
    #'^<%= pod_prefix %>'
    #'^<%= xcode_app_path %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
<% prefixes.each do |prefix| %>
    #'^<%= prefix %>/*'
<% end %>
  )
)
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end