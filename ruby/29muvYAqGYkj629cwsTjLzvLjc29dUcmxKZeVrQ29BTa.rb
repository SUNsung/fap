
        
              def self.details
        [
          'The options are the same as `:enable_services` in the [produce action](https://docs.fastlane.tools/actions/produce/#parameters_1)'
        ].join('\n')
      end
    
          def initialize(path = nil, require_variable_prefix = true)
        version_var_name = 'version'
        variable_prefix = require_variable_prefix ? /\w\./ : //
        @version_regex = /^(?<begin>[^#]*#{variable_prefix}#{version_var_name}\s*=\s*[''])(?<value>(?<major>[0-9]+)(\.(?<minor>[0-9]+))?(\.(?<patch>[0-9]+))?(?<appendix>(\.[0-9]+)*)?(-(?<prerelease>(.+)))?)(?<end>[''])/i
    
          app = find_app(apple_id: options[:apple_id], app_identifier: options[:app_identifier])
      if app
        testers = app.get_beta_testers(includes: 'apps,betaTesterMetrics,betaGroups')
      else
        testers = Spaceship::ConnectAPI::BetaTester.all(includes: 'apps,betaTesterMetrics,betaGroups')
      end
    
          module InternalState
        PROCESSING_EXCEPTION = 'PROCESSING_EXCEPTION'
        MISSING_EXPORT_COMPLIANCE = 'MISSING_EXPORT_COMPLIANCE'
        READY_FOR_BETA_TESTING = 'READY_FOR_BETA_TESTING'
        IN_BETA_TESTING = 'IN_BETA_TESTING'
        EXPIRED = 'EXPIRED'
        IN_EXPORT_COMPLIANCE_REVIEW = 'IN_EXPORT_COMPLIANCE_REVIEW'
      end
    
          module DeviceClass
        APPLE_WATCH = 'APPLE_WATCH'
        IPAD = 'IPAD'
        IPHONE = 'IPHONE'
        IPOD = 'IPOD'
        APPLE_TV = 'APPLE_TV'
        MAC = 'MAC'
      end
    
              @client
        end
    
          private
    
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
          node.before(node.children).remove
        end
    
    module Docs
  class URL < URI::Generic
    PARSER = URI::Parser.new
    
            # Remove skipped items
        css('li > span').each do |node|
          node.parent.remove
        end
      end
    
            css('> table:first-child + h1').each do |node|
          node.previous_element.remove
        end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)