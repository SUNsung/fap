
        
          setup do
    @old_escape_html_entities_in_json = ActiveSupport.escape_html_entities_in_json
    ActiveSupport.escape_html_entities_in_json = true
    @template = self
    @request = Class.new do
      def send_early_hints(links) end
    end.new
  end
    
        class MessageDelivery < ActionMailer::MessageDelivery # :nodoc:
      def initialize(mailer_class, action, params, *args)
        super(mailer_class, action, *args)
        @params = params
      end
    
            def application_mailer_file_name
          @_application_mailer_file_name ||= if mountable_engine?
            'app/mailers/#{namespaced_path}/application_mailer.rb'
          else
            'app/mailers/application_mailer.rb'
          end
        end
    end
  end
end

    
      p.action do |args, _|
    if args.empty?
      Jekyll.logger.error 'A subcommand is required.'
      puts p
      abort
    else
      subcommand = args.first
      unless p.has_command? subcommand
        Jekyll.logger.abort_with 'fatal: 'jekyll #{args.first}' could not' \
          ' be found. You may need to install the jekyll-#{args.first} gem' \
          ' or a related gem to be able to use this subcommand.'
      end
    end
  end
end

    
    map = {}
dups = []
    
          config.paths['log']             = '#{Msf::Config.log_directory}/#{Rails.env}.log'
      config.paths['config/database'] = [Metasploit::Framework::Database.configurations_pathname.try(:to_path)]
    
    parser = Parser.new(filename)
parser.parse
print parser.get_result
    
          if File.directory?(source_entry)
        FileUtils.mkdir(target_entry) unless File.exists?(target_entry)
        transform_r(source_entry, target_entry)
      else
        # copy the new file, in case of being an .erb file should render first
        if source_entry.end_with?('erb')
          target_entry = target_entry.gsub(/.erb$/,'').gsub('example', name)
          File.open(target_entry, 'w') { |f| f.write(render(source_entry)) }
        else
          FileUtils.cp(source_entry, target_entry)
        end
        puts '\t create #{File.join(full_plugin_name, Pathname.new(target_entry).relative_path_from(Pathname.new(@target_path)))}'
      end
    end
  end
    
      protected
  def extract_fields(filter_string)
    (filter_string.empty? ? [] : filter_string.split(',').map { |s| s.strip.to_sym })
  end
    
      public
  def clone
    return self.class.new(params)
  end
end; end # class LogStash::Codecs::Base
