
        
            def editor(screenshot)
      if screenshot.mac?
        return MacEditor.new(screenshot)
      else
        return Editor.new(screenshot, Frameit.config[:debug_mode])
      end
    end
  end
end

    
              disabled_services_object = self.service_object
          disabled_services.each do |k, v|
            disabled_services_object.__hash__[k] = true
            disabled_services_object.send('#{k}=', v)
          end
          Produce::Service.disable(disabled_services_object, nil) unless disabled_services.empty?
        end
      end
    
            new_appendix = new_appendix.sub('.', '') if new_appendix.start_with?('.')
        major = version_match[:major].to_i
        minor = version_match[:minor].to_i || 0
        patch = version_match[:patch].to_i || 0
    
          @app ||= Spaceship::ConnectAPI::App.get(app_id: @app_id)
      unless @app
        UI.user_error!('Could not find app with #{(config[:apple_id] || config[:app_identifier])}')
      end
      return @app
    end
    
              metric = (tester.beta_tester_metrics || []).first
          if metric.installed?
            install_version = '#{metric.installed_cf_bundle_short_version_string} (#{metric.installed_cf_bundle_version})'
            pretty_date = metric.installed_cf_bundle_version
          end
    
        private
    
          def self.get(bundle_id_id: nil, includes: nil)
        return Spaceship::ConnectAPI.get_bundle_id(bundle_id_id: bundle_id_id, includes: includes).first
      end
    end
  end
end

    
        def check_sha256_actually_256(sha256: cask.sha256, stanza: 'sha256')
      odebug 'Verifying #{stanza} string is a legal SHA-256 digest'
      return unless sha256.is_a?(String)
      return if sha256.length == 64 && sha256[/^[0-9a-f]+$/i]
    
    module RuboCop
  module Cop
    module FormulaAudit
      # This cop checks for various miscellaneous Homebrew coding styles.
      class Lines < FormulaCop
        def audit_formula(_node, _class_node, _parent_class_node, _body_node)
          [:automake, :ant, :autoconf, :emacs, :expat, :libtool, :mysql, :perl,
           :postgresql, :python, :python3, :rbenv, :ruby].each do |dependency|
            next unless depends_on?(dependency)
    
        it 'works with tags' do
      spec.uses_from_macos('foo' => :head, :after => :el_capitan)
    
    module Cask
  class Download
    attr_reader :cask