
        
            lambda {
      catch :blah do
        throw :blah, :return_value, 2, 3, 4, 5
      end
    }.should raise_error(ArgumentError)
  end
    
      it 'calls #write on $stderr if $VERBOSE is false' do
    lambda {
      $VERBOSE = false
      warn('this is some simple text')
    }.should output(nil, 'this is some simple text\n')
  end
    
      def framework_major_version
    framework_version.split('.').first.to_i
  end
end
World(RailsCommandHelpers)

    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
      # Provides configurability to Paperclip. The options available are:
  # * whiny: Will raise an error if Paperclip cannot process thumbnails of
  #   an uploaded image. Defaults to true.
  # * log: Logs progress to the Rails log. Uses ActiveRecord's logger, so honors
  #   log levels, etc. Defaults to true.
  # * command_path: Defines the path at which to find the command line
  #   programs if they are not visible to Rails the system's search path. Defaults to
  #   nil, which uses the first executable found in the user's search path.
  # * use_exif_orientation: Whether to inspect EXIF data to determine an
  #   image's orientation. Defaults to true.
  def self.options
    @options ||= {
      command_path: nil,
      content_type_mappings: {},
      log: true,
      log_command: true,
      read_timeout: nil,
      swallow_stderr: true,
      use_exif_orientation: true,
      whiny: true,
      is_windows: Gem.win_platform?
    }
  end
    
      option '--description', 'DESCRIPTION', 'Add a description for this package.' \
    ' You can include '\\n' sequences to indicate newline breaks.',
    :default => 'no description'
  option '--url', 'URI', 'Add a url for this package.',
    :default => 'http://example.com/no-uri-given'
  option '--inputs', 'INPUTS_PATH',
    'The path to a file containing a newline-separated list of ' \
    'files and dirs to use as input.'
    
      #######################################
  # The following methods are provided to
  # easily override particular substitut-
  # ions performed by to_s for subclasses
  #######################################
  def to_s_arch;        architecture.to_s;  end
  def to_s_name;        name.to_s;          end
  def to_s_fullversion; iteration ? '#{version}-#{iteration}' : '#{version}'; end
  def to_s_version;     version.to_s;       end
  def to_s_iteration;   iteration.to_s;     end
  def to_s_epoch;       epoch.to_s;         end
  def to_s_type;        type.to_s;          end
  def to_s_extension;   type.to_s;          end
  #######################################
    
      option '--group', 'GROUP',
    'Set the group to GROUP in the prototype file.',
    :default => 'root'
    
        libs = [ 'install.sh', 'install-path.sh', 'generate-cleanup.sh' ]
    libs.each do |file|
      base = staging_path(File.join(attributes[:prefix]))
      File.write(File.join(base, file), template(File.join('pleaserun', file)).result(binding))
      File.chmod(0755, File.join(base, file))
    end
    
          safesystem(attributes[:python_bin], 'setup.py', 'install', *flags)
    end
  end # def install_to_staging