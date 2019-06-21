
        
        require 'em-websocket'
    
    module Jekyll
  module Drops
    class UnifiedPayloadDrop < Drop
      mutable true
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
        delegate :empty?, :blank?, to: :pages
    
    module Docs
  class Scraper < Doc
    class << self
      attr_accessor :base_url, :root_path, :initial_paths, :options, :html_filters, :text_filters, :stubs
    
        def justify(str)
      return str unless terminal_width
      str = str.dup
    
      class SendPublic < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
          def before
        @versions[0][0..6]
      end
    
    context 'Precious::Helpers' do
  include Precious::Helpers
    
    def rubyforge_project
  name
end
    
          # File.basename is too eager to please and will return the last
      # component of the path even if it ends with a directory separator.
      ::File.basename(file_path)
    end
    
            if obj && obj.errors[method].present?
          errors = safe_join(obj.errors[method], '<br />'.html_safe)
          content_tag(:span, errors, class: 'formError')
        else
          ''
        end
      end
    
        sh 'gem build spree.gemspec'
    mv 'spree-#{version}.gem', pkgdir
  end