
        
        # Create an array of vendored mimetype => [extensions]
mimes = {}
json = open('https://raw.githubusercontent.com/jshttp/mime-db/master/db.json').read
data = JSON.parse(json)
data.reject! { |mime, meta| meta['extensions'].nil? || meta['extensions'].empty? }
data.each do |mime, meta|
  # Normalize extensions and mime-types
  mime = mime.downcase.strip
  extensions = meta['extensions'].map { |e| e.downcase.strip }.compact
    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
    profile = Profile.new
# puts profile.generate
command = ['/usr/bin/sandbox-exec', '-p', profile.generate, profile.pod_bin, *ARGV]
exec(*command)

    
            def self.options
          [[
            '--all', 'Remove all the cached pods without asking'
          ]].concat(super)
        end
    
            def signal_end_of_output
          output_pipe.puts(END_OF_OUTPUT_SIGNAL)
          STDOUT.flush
        end
    
        def self.register(klass, attachment_name, attachment_options)
      instance.register(klass, attachment_name, attachment_options)
    end
    
          @klass.send :define_method, @name do |*args|
        ivar = '@attachment_#{name}'
        attachment = instance_variable_get(ivar)
    
        # Returns the id of the instance.
    def id attachment, style_name
      attachment.instance.id
    end
    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end
    
        logger.info('Installing pear package', :package => input_package,
                  :directory => staging_path)
    ::Dir.chdir(staging_path) do
      safesystem('pear', '-c', config, 'install', '-n', '-f', input_package)
    end
    
      option '--user', 'USER',
    'Set the user to USER in the prototype files.',
    :default => 'root'