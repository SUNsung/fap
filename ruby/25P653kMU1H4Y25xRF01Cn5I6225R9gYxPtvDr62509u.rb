
        
        module Jobs
    
        def add(path, content)
      @pages[path] = content
    end
    
              node.css('> ul > li > a').each do |link|
            n = link.content
            next if n.start_with?('Ex: ') || n.start_with?('Default ') || n =~ /example/i || IGNORE_ENTRIES.include?(n)
            id = link['href'].remove('#')
            n.downcase!
            n.prepend '#{name}: '
            entries << [n, id]
          end
        end
    
          class ValidateAttachmentPresenceMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end
    
        module Statements
      def add_attachment(table_name, *attachment_names)
        raise ArgumentError, 'Please specify attachment name in your add_attachment call in your migration.' if attachment_names.empty?
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end