
        
              def self.is_supported?(platform)
        true
      end
    
            command = [adb_path, 'devices'].join(' ')
        output = Actions.sh(command, log: false)
        output.split('\n').each do |line|
          if (result = line.match(/(.*)\tdevice$/))
            self.devices << AdbDevice.new(serial: result[1])
          end
        end
        self.devices
      end
    end
  end
end

    
          it 'does set the output directory' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(output_directory: '/tmp')
          end').runner.execute(:test)
    
    puts 'Validating #{links.size} links...'
    
        private
    
    module Metasploit
  module Framework
    class Application < Rails::Application
      include Metasploit::Framework::CommonEngine
    
        if extension_pathname.readable?
      ENV['BUNDLE_GEMFILE'] = extension_pathname.to_path
      break
    end
  end
end
    
    #
# This script extracts the forms from the main page of each
# web site in a list. The output of this can be used with
# Metasploit (and other tools) to obtain the saved form data
# of these domains.
#
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 21 and pkt.tcp_dport != 21)
    s = find_session((pkt.tcp_sport == 21) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'ftp'
    
          case matched
        when :ok
          # Last command was successful, in addition most servers transmit a banner with the first +OK
          case s[:last]
            when nil
              # Its the first +OK must include the banner, worst case its just +OK
              s[:info]  = matches
              s[:proto] = 'tcp'
              s[:name]  = 'pop3'
              report_service(s)
    
    
    
    meterp.core.use('Stdapi')
    
    classNames.each { |name|
	filesIn << clsFile.new_with_sig('Ljava.lang.String;', '#{outputDir}/#{name}.class')
}
    
    		elsif line =~ /\w+:\t/
			block_do(line)
    
    Then /^(?:|I )should see '([^']*)'$/ do |text|
  expect(page).to have_content(text)
end

    
        def self.names_for(klass)
      instance.names_for(klass)
    end
    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end
    
            def type_allowed?(type)
          @subject.send('#{@attachment_name}_content_type=', type)
          @subject.valid?
          @subject.errors[:'#{@attachment_name}_content_type'].blank?
        end
    
            def matches? subject
          @subject = subject
          @subject = subject.new if subject.class == Class
          error_when_not_valid? && no_error_when_valid?
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
