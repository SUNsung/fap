
        
                default_connectors = {
          words_connector: ', ',
          two_words_connector: ' and ',
          last_word_connector: ', and '
        }
        if defined?(I18n)
          i18n_connectors = I18n.translate(:'support.array', locale: options[:locale], default: {})
          default_connectors.merge!(i18n_connectors)
        end
        options = default_connectors.merge!(options)
    
            def render(&block)
          render_collection_for(RadioButtonBuilder, &block)
        end
    
              super(object_name, method_name, template_object, options)
        end
    
      def pin
    pin_at(@f.installed_kegs.map(&:version).max)
  end
    
    module Sinatra
  class Application < Base
    
    desc 'run specs'
task(:spec) { ruby '-S rspec spec' }
    
          def self.random_token
        SecureRandom.base64(TOKEN_LENGTH)
      end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
            header = file.read(TAR_CHUNK_SIZE)
        typeflag = header[TAR_TYPEFLAG_OFFSET]
        record_length = header[TAR_LENGTH_OFFSET_START..TAR_LENGTH_OFFSET_END].to_i(8)
    
        if File.directory?(source)
      if !File.symlink?(source)
        # Create a directory if this path is a directory
        logger.debug('Creating', :directory => destination)
        if !File.directory?(destination)
          FileUtils.mkdir(destination)
        end
      else
        # Linking symlinked directories causes a hardlink to be created, which
        # results in the source directory being wiped out during cleanup,
        # so copy the symlink.
        logger.debug('Copying symlinked directory', :source => source,
                      :destination => destination)
        FileUtils.copy_entry(source, destination)
      end
    else
      # Otherwise try copying the file.
      begin
        logger.debug('Linking', :source => source, :destination => destination)
        File.link(source, destination)
      rescue Errno::ENOENT, Errno::EXDEV, Errno::EPERM
        # Hardlink attempt failed, copy it instead
        logger.debug('Copying', :source => source, :destination => destination)
        copy_entry(source, destination)
      rescue Errno::EEXIST
        sane_path = destination.gsub(staging_path, '')
        logger.error('Cannot copy file, the destination path is probably a directory and I attempted to write a file.', :path => sane_path, :staging => staging_path)
      end
    end
    
      option '--postinstall-action', 'POSTINSTALL_ACTION',
    'Post-install action provided in package metadata. ' \
    'Optionally one of '#{POSTINSTALL_ACTIONS.join('', '')}'.' do |value|
    if !POSTINSTALL_ACTIONS.include?(value)
      raise ArgumentError, 'osxpkg-postinstall-action value of '#{value}' is invalid. ' \
        'Must be one of #{POSTINSTALL_ACTIONS.join(', ')}'
    end
    value
  end
    
        # do channel-update if requested
    if attributes[:pear_channel_update?]
      channel = attributes[:pear_channel] || 'pear'
      logger.info('Updating the channel', :channel => channel)
      safesystem('pear', '-c', config, 'channel-update', channel)
    end
    
      def iteration
    return @iteration ? @iteration : 1
  end
    
      require 'pleaserun/platform/systemd'
  require 'pleaserun/platform/upstart'
  require 'pleaserun/platform/launchd'
  require 'pleaserun/platform/sysv'
    
      # Where we keep metadata and post install scripts and such
  def fpm_meta_path
    @fpm_meta_path ||= begin
                         path = File.join(staging_path, '.fpm')
                         FileUtils.mkdir_p(path)
                         path
                       end
  end
end
