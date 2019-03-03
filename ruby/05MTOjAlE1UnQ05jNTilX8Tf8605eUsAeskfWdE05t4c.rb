
        
              CHARS = {
        :failed    => '\u2718'.red,
        :pending   => '\u203D'.yellow,
        :undefined => '\u2718'.red,
        :passed    => '\u2714'.green,
        :skipped   => '\u203D'.blue,
      }.freeze
    
      Jekyll::Utils.strip_heredoc(<<-EOF)
    ---
    #{matter.gsub(
      %r!\n!, '\n    '
    )}
    ---
    #{content}
  EOF
end
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
        # The category for users with trust level 3 has been created.
    # Add initial permissions and description. They can be changed later.
    
                  execute_command 'xcodebuild -workspace '#{workspace_path}' -scheme '#{scheme_name}' clean build #{test_flag} ONLY_ACTIVE_ARCH=NO -destination 'platform=iOS Simulator,name=iPhone 7''
            else
              raise 'Unknown platform #{platform}'
            end
          end
        end
      end
    end
  end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
      it 'accepts post form requests with correct authenticity_token field' do
    post('/', {'authenticity_token' => token}, 'rack.session' => session)
    expect(last_response).to be_ok
  end
    
    class LogStash::PluginManager::Pack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'compress package as a tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'compress package as a zip file', :default => LogStash::Environment.windows?
  option '--[no-]clean', :flag, 'clean up the generated dump of plugins', :default => true
  option '--overwrite', :flag, 'Overwrite a previously generated package file', :default => false
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
    require '<%=file_name%>/version'
    
    shared_context 'creates guest order with guest token' do
  let(:guest_token) { 'guest_token' }
  let!(:order)      { create(:order, token: guest_token, store: store, currency: currency) }
  let!(:line_item)  { create(:line_item, order: order, currency: currency) }
  let!(:headers)    { headers_order_token }
    
        include_context 'API v2 tokens'
    
          it 'returns default country' do
        expect(json_response['data']).to have_id(default_country.id.to_s)
        expect(json_response['data']).to have_attribute(:iso).with_value(default_country.iso)
        expect(json_response['data']).to have_attribute(:default).with_value(true)
      end
    end
    
        context 'with non-existing Order number' do
      before { get '/api/v2/storefront/order_status/1' }
    
    require 'spree/api/testing_support/caching'
require 'spree/api/testing_support/helpers'
require 'spree/api/testing_support/setup'
require 'spree/api/testing_support/v2/base'
require 'spree/api/testing_support/v2/current_order'
    
              private
    
    desc 'Creates a sandbox application for simulating the Spree code in a deployed Rails app'
task :sandbox do
  Bundler.with_clean_env do
    exec('lib/sandbox.sh')
  end
end

    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
    When /^(?:|I )select '([^']*)' from '([^']*)'$/ do |value, field|
  select(value, :from => field)
end
    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end
    
      module ClassMethods
    # +has_attached_file+ gives the class it is called on an attribute that maps to a file. This
    # is typically a file stored somewhere on the filesystem and has been uploaded by a user.
    # The attribute returns a Paperclip::Attachment object which handles the management of
    # that file. The intent is to make the attachment as much like a normal attribute. The
    # thumbnails will be created when the new file is assigned, but they will *not* be saved
    # until +save+ is called on the record. Likewise, if the attribute is set to +nil+ is
    # called on it, the attachment will *not* be deleted until +save+ is called. See the
    # Paperclip::Attachment documentation for more specifics. There are a number of options
    # you can set to change the behavior of a Paperclip attachment:
    # * +url+: The full URL of where the attachment is publicly accessible. This can just
    #   as easily point to a directory served directly through Apache as it can to an action
    #   that can control permissions. You can specify the full domain and path, but usually
    #   just an absolute path is sufficient. The leading slash *must* be included manually for
    #   absolute paths. The default value is
    #   '/system/:class/:attachment/:id_partition/:style/:filename'. See
    #   Paperclip::Attachment#interpolate for more information on variable interpolaton.
    #     :url => '/:class/:attachment/:id/:style_:filename'
    #     :url => 'http://some.other.host/stuff/:class/:id_:extension'
    #   Note: When using the +s3+ storage option, the +url+ option expects
    #   particular values. See the Paperclip::Storage::S3#url documentation for
    #   specifics.
    # * +default_url+: The URL that will be returned if there is no attachment assigned.
    #   This field is interpolated just as the url is. The default value is
    #   '/:attachment/:style/missing.png'
    #     has_attached_file :avatar, :default_url => '/images/default_:style_avatar.png'
    #     User.new.avatar_url(:small) # => '/images/default_small_avatar.png'
    # * +styles+: A hash of thumbnail styles and their geometries. You can find more about
    #   geometry strings at the ImageMagick website
    #   (http://www.imagemagick.org/script/command-line-options.php#resize). Paperclip
    #   also adds the '#' option (e.g. '50x50#'), which will resize the image to fit maximally
    #   inside the dimensions and then crop the rest off (weighted at the center). The
    #   default value is to generate no thumbnails.
    # * +default_style+: The thumbnail style that will be used by default URLs.
    #   Defaults to +original+.
    #     has_attached_file :avatar, :styles => { :normal => '100x100#' },
    #                       :default_style => :normal
    #     user.avatar.url # => '/avatars/23/normal_me.png'
    # * +keep_old_files+: Keep the existing attachment files (original + resized) from
    #   being automatically deleted when an attachment is cleared or updated. Defaults to +false+.
    # * +preserve_files+: Keep the existing attachment files in all cases, even if the parent
    #   record is destroyed. Defaults to +false+.
    # * +whiny+: Will raise an error if Paperclip cannot post_process an uploaded file due
    #   to a command line error. This will override the global setting for this attachment.
    #   Defaults to true.
    # * +convert_options+: When creating thumbnails, use this free-form options
    #   array to pass in various convert command options.  Typical options are '-strip' to
    #   remove all Exif data from the image (save space for thumbnails and avatars) or
    #   '-depth 8' to specify the bit depth of the resulting conversion.  See ImageMagick
    #   convert documentation for more options: (http://www.imagemagick.org/script/convert.php)
    #   Note that this option takes a hash of options, each of which correspond to the style
    #   of thumbnail being generated. You can also specify :all as a key, which will apply
    #   to all of the thumbnails being generated. If you specify options for the :original,
    #   it would be best if you did not specify destructive options, as the intent of keeping
    #   the original around is to regenerate all the thumbnails when requirements change.
    #     has_attached_file :avatar, :styles => { :large => '300x300', :negative => '100x100' }
    #                                :convert_options => {
    #                                  :all => '-strip',
    #                                  :negative => '-negate'
    #                                }
    #   NOTE: While not deprecated yet, it is not recommended to specify options this way.
    #   It is recommended that :convert_options option be included in the hash passed to each
    #   :styles for compatibility with future versions.
    #   NOTE: Strings supplied to :convert_options are split on space in order to undergo
    #   shell quoting for safety. If your options require a space, please pre-split them
    #   and pass an array to :convert_options instead.
    # * +storage+: Chooses the storage backend where the files will be stored. The current
    #   choices are :filesystem, :fog and :s3. The default is :filesystem. Make sure you read the
    #   documentation for Paperclip::Storage::Filesystem, Paperclip::Storage::Fog and Paperclip::Storage::S3
    #   for backend-specific options.
    #
    # It's also possible for you to dynamically define your interpolation string for :url,
    # :default_url, and :path in your model by passing a method name as a symbol as a argument
    # for your has_attached_file definition:
    #
    #   class Person
    #     has_attached_file :avatar, :default_url => :default_url_by_gender
    #
    #     private
    #
    #     def default_url_by_gender
    #       '/assets/avatars/default_#{gender}.png'
    #     end
    #   end
    def has_attached_file(name, options = {})
      HasAttachedFile.define_on(self, name, options)
    end
  end
end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        def define_getters
      define_instance_getter
      define_class_getter
    end