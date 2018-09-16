
        
                if options[:bypass]
          ActiveSupport::Deprecation.warn(<<-DEPRECATION.strip_heredoc, caller)
          [Devise] bypass option is deprecated and it will be removed in future version of Devise.
          Please use bypass_sign_in method instead.
          Example:
    
        def skip_format?
      %w(html */*).include? request_format.to_s
    end
    
          if rest.start_with?('/element.')
        return redirect '/dom#{rest.sub('element.', 'element/')}', 301
      end
    
    module Docs
  class EntryIndex
    attr_reader :entries, :types
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
    module Docs
  class Subscriber < ActiveSupport::Subscriber
    cattr_accessor :namespace
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
            css('ul.methods', 'ul.properties', 'ul.events').add_class('defs').each do |node|
          node.css('> li > h3').each do |h3|
            next if h3.content.present?
            h3.content = h3.next_element.content
            h3.next_element.remove
          end
        end
      end
    end
  end
end

    
    require 'rake/testtask'
Rake::TestTask.new do |t|
  t.libs << 'test'
  t.test_files = FileList['test/**/*_test.rb']
  t.verbose = true
end
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false