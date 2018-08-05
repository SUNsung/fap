
        
                def test_url_host_db
          spec = resolve 'abstract://foo/bar?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'database' => 'bar',
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
          def test_create_table_raises_when_redefining_primary_key_column
        error = assert_raise(ArgumentError) do
          connection.create_table :testings do |t|
            t.column :id, :string
          end
        end
    
      private
    def assert_logged(message)
      old_logger = @connection.logger
      log = StringIO.new
      @connection.instance_variable_set(:@logger, Logger.new(log))
    
    class ActionCable::Channel::RejectionTest < ActionCable::TestCase
  class SecretChannel < ActionCable::Channel::Base
    def subscribed
      reject if params[:id] > 0
    end
    
    WebSocket::Frame::Data.prepend Module.new {
  def initialize(*)
    @masking_key = nil
    super
  end
}
#
####
    
      class FakeConnection
    def close
    end
  end
    
          broadcaster = server.broadcaster_for(broadcasting)
      broadcaster.broadcast(message)
    
    When /^(?:|I )press '([^']*)'$/ do |button|
  click_button(button)
end
    
        def type_from_file_command
      @type_from_file_command ||=
        FileCommandContentTypeDetector.new(@filepath).detect
    end
  end
end

    
        private
    
            def expected_attachment
          'Expected #{@attachment_name}:\n'
        end
    
        # You can add your own processor via the Paperclip configuration. Normally
    # Paperclip will load all processors from the
    # Rails.root/lib/paperclip_processors directory, but here you can add any
    # existing class using this mechanism.
    #
    #   Paperclip.configure do |c|
    #     c.register_processor :watermarker, WatermarkingProcessor.new
    #   end
    def register_processor(name, processor)
      @known_processors ||= {}
      @known_processors[name.to_s] = processor
    end
  end
end

    
            return if (value.nil? && options[:allow_nil]) || (value.blank? && options[:allow_blank])
    
          def validate_each(record, attribute, value)
        base_attribute = attribute.to_sym
        attribute = '#{attribute}_file_name'.to_sym
        value = record.send :read_attribute_for_validation, attribute
    
      option '--postinstall-action', 'POSTINSTALL_ACTION',
    'Post-install action provided in package metadata. ' \
    'Optionally one of '#{POSTINSTALL_ACTIONS.join('', '')}'.' do |value|
    if !POSTINSTALL_ACTIONS.include?(value)
      raise ArgumentError, 'osxpkg-postinstall-action value of '#{value}' is invalid. ' \
        'Must be one of #{POSTINSTALL_ACTIONS.join(', ')}'
    end
    value
  end
    
        pear_cmd = 'pear -c #{config} remote-info #{input_package}'
    logger.info('Fetching package information', :package => input_package, :command => pear_cmd)
    name = %x{#{pear_cmd} | sed -ne '/^Package\s*/s/^Package\s*//p'}.chomp
    self.name = '#{attributes[:pear_package_name_prefix]}-#{name}'
    self.version = %x{#{pear_cmd} | sed -ne '/^Installed\s*/s/^Installed\s*//p'}.chomp
    self.description  = %x{#{pear_cmd} | sed -ne '/^Summary\s*/s/^Summary\s*//p'}.chomp
    logger.debug('Package info', :name => self.name, :version => self.version,
                  :description => self.description)
    
      describe '-v | --version' do
    subject { FPM::Command.new('fpm') }
    
        after :all do
      @original.cleanup
      @input.cleanup
    end # after
    
      subject do
    source = FPM::Package::Gem.new
    prefix = source.attributes[:gem_package_name_prefix ] = 'rubygem19'
    name = source.name = 'whatever'
    version = source.version = '1.0'
    source.provides << '#{prefix}-#{name} = #{version}'
    source.convert(FPM::Package::RPM)
  end
    
              config_class.configure(&config_block)
          unless options.empty?
            warn '[DEPRECATION] Passing a options hash and a block to `desc` is deprecated. Move all hash options to block.'
          end
          options = config_class.settings
        else
          options = options.merge(description: description)
        end
    
          def full_messages
        map { |attributes, error| full_message(attributes, error) }.uniq
      end