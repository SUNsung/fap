
        
            assert_response 307
    assert_equal referer, redirect_to_url
  end
    
            def test_url_sub_key_for_sqlite3
          spec = resolve :production, 'production' => { 'url' => 'sqlite3:foo?encoding=utf8' }
          assert_equal({
            'adapter'  => 'sqlite3',
            'database' => 'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
            def encoded(value)
          unless default_value?(value)
            coder.dump(value)
          end
        end
    end
  end
end

    
    class UniqueReply < Reply
  belongs_to :topic, foreign_key: 'parent_id', counter_cache: true
  validates_uniqueness_of :content, scope: 'parent_id'
end
    
        @connection.stub(:subscriptions, subscriptions) do
      @channel = SecretChannel.new @connection, '{id: 1}', id: 1
      @channel.subscribe_to_channel
    
        def send_async(method, *args)
      send method, *args
    end
  end
    
          assert_not connection.connected
      assert_equal [], @server.connections
    end
  end
    
          @connection.process
      @connection.send :handle_open
    end
    
          assert_called(channel, :unsubscribe_from_channel) do
        @subscriptions.execute_command 'command' => 'unsubscribe', 'identifier' => @chat_identifier
      end
    
    require 'test_helper'
require 'stubs/test_server'
require 'active_support/core_ext/hash/indifferent_access'
    
      def create_gist(files, description)
    url = 'https://api.github.com/gists'
    data = { 'public' => true, 'files' => files, 'description' => description }
    scopes = GitHub::CREATE_GIST_SCOPES
    GitHub.open_api(url, data: data, scopes: scopes)['html_url']
  end
    
        uses = formulae.select do |f|
      used_formulae.all? do |ff|
        begin
          deps = f.runtime_dependencies if only_installed_arg
          deps ||= if recursive
            recursive_includes(Dependency, f, includes, ignores)
          else
            reject_ignores(f.deps, ignores, includes)
          end
    
    class MercurialRequirement < Requirement
  fatal true
  satisfy do
    odisabled('MercurialRequirement', ''depends_on \'mercurial\''')
  end
end
    
      def_delegators :@logger, :log, :log_status, :log_processing, :log_transform, :log_file_info, :log_processed, :log_http_get_file, :log_http_get_files, :silence_log
    
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

    
    desc 'Dumps output to a CSS file for testing'
task :debug do
  require 'sass'
  path = Bootstrap.stylesheets_path
  %w(bootstrap).each do |file|
    engine = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    File.open('./#{file}.css', 'w') { |f| f.write(engine.render) }
  end
end
    
        def self.clear
      instance.clear
    end
    
        def blank_name?
      @filepath.nil? || @filepath.empty?
    end
    
    module Paperclip
  # Provides helper methods that can be used in migrations.
  module Schema
    COLUMNS = {:file_name    => :string,
               :content_type => :string,
               :file_size    => :integer,
               :updated_at   => :datetime}
    
        ::Paperclip::REQUIRED_VALIDATORS = [AttachmentFileNameValidator, AttachmentContentTypeValidator, AttachmentFileTypeIgnoranceValidator]
    
        module HelperMethods
      # Places ActiveModel validations on the content type of the file
      # assigned. The possible options are:
      # * +content_type+: Allowed content types.  Can be a single content type
      #   or an array.  Each type can be a String or a Regexp. It should be
      #   noted that Internet Explorer uploads files with content_types that you
      #   may not expect. For example, JPEG images are given image/pjpeg and
      #   PNGs are image/x-png, so keep that in mind when determining how you
      #   match.  Allows all by default.
      # * +not+: Forbidden content types.
      # * +message+: The message to display when the uploaded file has an invalid
      #   content type.
      # * +if+: A lambda or name of an instance method. Validation will only
      #   be run is this lambda or method returns true.
      # * +unless+: Same as +if+ but validates if lambda or method returns false.
      # NOTE: If you do not specify an [attachment]_content_type field on your
      # model, content_type validation will work _ONLY upon assignment_ and
      # re-validation after the instance has been reloaded will always succeed.
      # You'll still need to have a virtual attribute (created by +attr_accessor+)
      # name +[attachment]_content_type+ to be able to use this validator.
      def validates_attachment_content_type(*attr_names)
        options = _merge_attributes(attr_names)
        validates_with AttachmentContentTypeValidator, options.dup
        validate_before_processing AttachmentContentTypeValidator, options.dup
      end
    end
  end
end
