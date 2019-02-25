
        
          def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
      class Blockquote < Liquid::Block
    FullCiteWithTitle = /(\S.*)\s+(https?:\/\/)(\S+)\s+(.+)/i
    FullCite = /(\S.*)\s+(https?:\/\/)(\S+)/i
    AuthorTitle = /([^,]+),([^,]+)/
    Author =  /(.+)/
    
        # Initializes a new CategoryIndex.
    #
    #  +base+         is the String path to the <source>.
    #  +category_dir+ is the String path between <source> and the category folder.
    #  +category+     is the category currently being processed.
    def initialize(site, base, category_dir, category)
      @site = site
      @base = base
      @dir  = category_dir
      @name = 'index.html'
      self.process(@name)
      # Read the YAML data from the layout page.
      self.read_yaml(File.join(base, '_layouts'), 'category_index.html')
      self.data['category']    = category
      # Set the title for this page.
      title_prefix             = site.config['category_title_prefix'] || 'Category: '
      self.data['title']       = '#{title_prefix}#{category}'
      # Set the meta-description for this page.
      meta_description_prefix  = site.config['category_meta_description_prefix'] || 'Category: '
      self.data['description'] = '#{meta_description_prefix}#{category}'
    end
    
        def get_cache_file_for(gist, file)
      bad_chars = /[^a-zA-Z0-9\-_.]/
      gist      = gist.gsub bad_chars, ''
      file      = file.gsub bad_chars, ''
      md5       = Digest::MD5.hexdigest '#{gist}-#{file}'
      File.join @cache_folder, '#{gist}-#{file}-#{md5}.cache'
    end
    
    def attach_attachment(name, definition = nil)
  snippet = 'has_attached_file :#{name}'
  if definition
    snippet += ', \n'
    snippet += definition
  end
  snippet += '\ndo_not_validate_attachment_file_type :#{name}\n'
  cd('.') do
    transform_file('app/models/user.rb') do |content|
      content.sub(/end\Z/, '#{snippet}\nend')
    end
  end
end
    
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
    
        # Swaps the height and width if necessary
    def auto_orient
      if EXIF_ROTATED_ORIENTATION_VALUES.include?(@orientation)
        @height, @width = @width, @height
        @orientation -= 4
      end
    end