
        
            # Returns the unwrapped subject and body of the last commit
    # <b>DEPRECATED:</b> Use <tt>last_git_commit_message</tt> instead.
    def self.last_git_commit
      UI.important('`last_git_commit` is deprecated. Please use `last_git_commit_message` instead.')
      last_git_commit_message
    end
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :name,
                                       env_name: 'KEYCHAIN_NAME',
                                       description: 'Keychain name',
                                       conflicting_options: [:path],
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :path,
                                       env_name: 'KEYCHAIN_PATH',
                                       description: 'Path to keychain',
                                       is_string: true,
                                       conflicting_options: [:name],
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :password,
                                       env_name: 'KEYCHAIN_PASSWORD',
                                       description: 'Password for the keychain',
                                       sensitive: true,
                                       optional: false),
          FastlaneCore::ConfigItem.new(key: :default_keychain,
                                       description: 'Should the newly created Keychain be the new system default keychain',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :unlock,
                                       description: 'Unlock keychain after create',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :timeout,
                                       description: 'timeout interval in seconds. Set `false` if you want to specify 'no time-out'',
                                       is_string: false,
                                       default_value: 300),
          FastlaneCore::ConfigItem.new(key: :lock_when_sleeps,
                                       description: 'Lock keychain when the system sleeps',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :lock_after_timeout,
                                       description: 'Lock keychain after timeout interval',
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :add_to_search_list,
                                       description: 'Add keychain to search list',
                                       is_string: false,
                                       default_value: true)
        ]
      end
    
          it 'gets the correct version number for 'TargetATests'' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_version_number(xcodeproj: '.xcproject', target: 'TargetATests')
        end').runner.execute(:test)
        expect(result).to eq('4.3.2')
      end
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def type=(value)
      @type = value.try :strip
    end
    
        delegate :empty?, :blank?, to: :pages
    
        def request_one(url)
      Response.new read_file(file_path_for(url)), URL.parse(url)
    end
    
              # Built-in events
          if node['id'] == 'Events-catalog'
            node.next_element.css('li').each do |li|
              name = '#{li.at_css('b').content.delete(''').strip} event'
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type] unless name == entries.last[0]
            end
            next
          end
    
              css('##{dom_id}-methods ~ h4 code').each do |node|
            next unless name = node.content[/\('(\w+)'\)/, 1]
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-method'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (method)'
            entries << [name, id]
          end
        end
    
    ###
### methods
###
    
        def new_timestamp(time = Time.now)
      time = time.utc
    
        # Creates an Attachment object. +name+ is the name of the attachment,
    # +instance+ is the model object instance it's attached to, and
    # +options+ is the same as the hash passed to +has_attached_file+.
    #
    # Options include:
    #
    # +url+ - a relative URL of the attachment. This is interpolated using +interpolator+
    # +path+ - where on the filesystem to store the attachment. This is interpolated using +interpolator+
    # +styles+ - a hash of options for processing the attachment. See +has_attached_file+ for the details
    # +only_process+ - style args to be run through the post-processor. This defaults to the empty list (which is
    #                  a special case that indicates all styles should be processed)
    # +default_url+ - a URL for the missing image
    # +default_style+ - the style to use when an argument is not specified e.g. #url, #path
    # +storage+ - the storage mechanism. Defaults to :filesystem
    # +use_timestamp+ - whether to append an anti-caching timestamp to image URLs. Defaults to true
    # +whiny+, +whiny_thumbnails+ - whether to raise when thumbnailing fails
    # +use_default_time_zone+ - related to +use_timestamp+. Defaults to true
    # +hash_digest+ - a string representing a class that will be used to hash URLs for obfuscation
    # +hash_data+ - the relative URL for the hash data. This is interpolated using +interpolator+
    # +hash_secret+ - a secret passed to the +hash_digest+
    # +convert_options+ - flags passed to the +convert+ command for processing
    # +source_file_options+ - flags passed to the +convert+ command that controls how the file is read
    # +processors+ - classes that transform the attachment. Defaults to [:thumbnail]
    # +preserve_files+ - whether to keep files on the filesystem when deleting or clearing the attachment. Defaults to false
    # +filename_cleaner+ - An object that responds to #call(filename) that will strip unacceptable charcters from filename
    # +interpolator+ - the object used to interpolate filenames and URLs. Defaults to Paperclip::Interpolations
    # +url_generator+ - the object used to generate URLs, using the interpolator. Defaults to Paperclip::UrlGenerator
    # +escape_url+ - Perform URI escaping to URLs. Defaults to true
    def initialize(name, instance, options = {})
      @name              = name.to_sym
      @name_string       = name.to_s
      @instance          = instance
    
        def each_definition
      @attachments.each do |klass, attachments|
        attachments.each do |name, options|
          yield klass, name, options
        end
      end
    end
    
        def type_from_mime_magic
      @type_from_mime_magic ||= File.open(@filepath) do |file|
        MimeMagic.by_magic(file).try(:type)
      end
    end
    
        # Returns the #to_param of the instance.
    def param attachment, style_name
      attachment.instance.to_param
    end
    
          class ValidateAttachmentContentTypeMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
          @allowed_types = []
          @rejected_types = []
        end
    
              @subject.send(@attachment_name).post_processing = false
          @subject.send(@attachment_name).assign(file)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_file_size'].blank?
        ensure
          @subject.send(@attachment_name).post_processing = true
        end
    
      # Get list of styles saved on previous deploy (running rake paperclip:refresh:missing_styles)
  def self.get_registered_attachments_styles
    YAML.load_file(Paperclip.registered_attachments_styles_path)
  rescue Errno::ENOENT
    nil
  end
  private_class_method :get_registered_attachments_styles