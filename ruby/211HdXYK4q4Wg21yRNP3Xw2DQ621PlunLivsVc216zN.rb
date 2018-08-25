
        
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
    
      mattr_accessor :rescue_errors
  self.rescue_errors = false
    
        def html?
      mime_type.include? 'html'
    end
    
          base = path
      dest = url.path
    
            css('.filetree .children').each do |node|
          node.css('.file').each do |n|
            n.content = '  #{n.content}'
          end
        end
    
            css('td h3', '.l-sub-section > h3', '.alert h3', '.row-margin > h3').each do |node|
          node.name = 'h4'
        end
    
            css('pre > code').each do |node|
          node['class'] ||= ''
          lang = if node['class'].include?('lang-html') || node.content =~ /\A</
            'html'
          elsif node['class'].include?('lang-css')
            'css'
          elsif node['class'].include?('lang-js') || node['class'].include?('lang-javascript')
            'javascript'
          end
          node.parent['data-language'] = lang if lang
    
        def initialize(machine, guests, capabilities)
      @capabilities = capabilities
      @guests       = guests
      @machine      = machine
    end
    
          with_index_lock do
        unlocked_reload
      end
    end
    
            # Executes a command and returns true if the command succeeded,
        # and false otherwise. By default, this executes as a normal user,
        # and it is up to the communicator implementation if they expose an
        # option for running tests as an administrator.
        #
        # @see #execute
        def test(command, opts=nil)
        end
      end
    end
  end
end

    
            # Converts this configuration object to JSON.
        def to_json(*a)
          instance_variables_hash.to_json(*a)
        end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
            # This returns all the registered guests.
        #
        # @return [Hash]
        def hosts
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.hosts)
            end
          end
        end
    
      def set_account
    @account = Account.find_local!(params[:account_username]) if params[:account_username]
  end
    
    module Admin
  class ReportedStatusesController < BaseController
    before_action :set_report
    
              if style == :for
            incorrect_style_detected(node)
          else
            correct_style_detected
          end
        end
    
      puts 'Finished parsing source, testing inspection...'
  puts(Benchmark.measure do
    iterations.times do
      commissioner = Cop::Commissioner.new([cop], [])
      srcs.each { |src| commissioner.investigate(src) }
    end
  end)
end
    
    Given /^I attach :attachment$/ do
  attach_attachment('attachment')
end
    
    Before do
  gemfile = ENV['BUNDLE_GEMFILE'].to_s
  ENV['BUNDLE_GEMFILE'] = File.join(Dir.pwd, gemfile) unless gemfile.start_with?(Dir.pwd)
  @framework_version = nil
end
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
        # Returns a the attachment hash.  See Paperclip::Attachment#hash_key for
    # more details.
    def hash attachment=nil, style_name=nil
      if attachment && style_name
        attachment.hash_key(style_name)
      else
        super()
      end
    end