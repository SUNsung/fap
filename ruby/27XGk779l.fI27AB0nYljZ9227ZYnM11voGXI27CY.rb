        def initialize(object_name, method_name, template_object, checked_value, unchecked_value, options)
          @checked_value   = checked_value
          @unchecked_value = unchecked_value
          super(object_name, method_name, template_object, options)
        end
    
    require 'action_view/helpers/tags/collection_helpers'
    
          def self.delegate_to(klass)
        self.type_klass = klass
      end
    
          test 'when layout is specified as a proc and the proc returns false, use no layout instead of inherited layout' do
        controller = WithProcReturningFalse.new
        controller.process(:index)
        assert_equal 'Hello false!', controller.response_body
      end
    
        def stop!
      @thread.kill if @thread&.alive?
      @thread = nil
      @reactor&.stop
      @reactor = nil
    end
    
          script_srcs = parse(builder.build)['script-src']
    
      describe 'report-uri' do
    it 'is enabled by SiteSetting' do
      SiteSetting.content_security_policy_collect_reports = true
      report_uri = parse(policy)['report-uri'].first
      expect(report_uri).to eq('http://test.localhost/csp_reports')
    
      def payload
    @_payload ||= request.body.read
  end
    
      def default_locale
    if ENV['DEFAULT_LOCALE'].present?
      I18n.default_locale
    else
      request_locale || I18n.default_locale
    end
  end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
        def default_attributes(&block)
      return if @options.nil?
      @options.each do |flag, param, help, options, _block|
        attr = flag.first.gsub(/^-+/, '').gsub(/-/, '_').gsub('[no_]', '')
        attr += '?' if param == :flag
        yield attr.to_sym, options[:default]
      end
    end # def default_attributes
    
          scripts_path(filename).tap do |pkgscript|
        logger.info('Writing pkg script', :source => filename, :target => pkgscript)
        File.write(pkgscript, script(scriptname))
        # scripts are required to be executable
        File.chmod(0755, pkgscript)
      end
    end
  end # def write_scripts
    
        attributes[:pleaserun_name] ||= File.basename(command.first)
    attributes[:prefix] ||= '/usr/share/pleaserun/#{attributes[:pleaserun_name]}'
    
      option '--group', 'GROUP',
    'Set the group to GROUP in the prototype file.',
    :default => 'root'
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for tar.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
          def self.has_issues_with_add_symlink?
        return !::Gem::Package::TarWriter.public_instance_methods.include?(:add_symlink)
      end
    end # module TarWriter
  end # module Issues
end # module FPM