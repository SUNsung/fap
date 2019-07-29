
        
          def connect_person_to_aspect(aspecting_person_id)
    @person = Person.find(aspecting_person_id)
    if @contact = current_user.contact_for(@person)
      @contact.aspect_memberships.create(aspect: @aspect)
    else
      @contact = current_user.share_with(@person, @aspect)
      @contact.aspect_memberships.first
    end
  end
    
    class ContactsController < ApplicationController
  before_action :authenticate_user!
    
        respond_to do |format|
      format.html do
        render 'invitations/new', layout: false
      end
    end
  end
    
          it 'should have the custom version' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.version } == 'custom-version'
      end
    
    # Add a script to run after install (should be in the current directory):
package.scripts[:after_install] = 'my_after_install_script.sh'
    
        # Reference
    # http://www.debian.org/doc/manuals/maint-guide/first.en.html
    # http://wiki.debian.org/DeveloperConfiguration
    # https://github.com/jordansissel/fpm/issues/37
    if ENV.include?('DEBEMAIL') and ENV.include?('DEBFULLNAME')
      # Use DEBEMAIL and DEBFULLNAME as the default maintainer if available.
      @maintainer = '#{ENV['DEBFULLNAME']} <#{ENV['DEBEMAIL']}>'
    else
      # TODO(sissel): Maybe support using 'git config' for a default as well?
      # git config --get user.name, etc can be useful.
      #
      # Otherwise default to user@currenthost
      @maintainer = '<#{ENV['USER']}@#{Socket.gethostname}>'
    end
    
        pkginfo = ''
    
        safesystem(*install_args)
    
        # Evaluate dependencies.
    if !attributes[:no_auto_depends?]
	    pkgdepend_gen = safesystemout('pkgdepend', 'generate',  '-md', '#{staging_path}',  manifest_fn)
      File.write(build_path('#{name}.p5m.3'), pkgdepend_gen)
    
        File.write(build_path('packlist'), files.sort.join('\n'))
    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
    Capybara.javascript_driver = :javascript_test
    
        expect(addresses[0]['street']).to eq('CDG')
    expect(addresses[0]['city']).to eq('Paris')
    expect(addresses[0]['country']).to eq('France')
    
      it 'should find the ancestor element using the given locator' do
    el = @session.find(:css, '#first_image')
    expect(el.ancestor('//p')).to have_text('Lorem ipsum dolor')
    expect(el.ancestor('//a')[:'aria-label']).to eq('Go to simple')
  end
    
        it 'raises if passed an invalid value' do
      expect { @session.find_link(download: 37) }.to raise_error ArgumentError
    end
  end
end

    
        def install_path
      @install_path ||= if options[:path]
          Pathname.new(File.join(options[:path], 'bourbon'))
        else
          Pathname.new('bourbon')
        end
    end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-width: 11px; ' +
                'border-right-width: 12px; ' +
                'border-left-width: 13px;'
      bad_rule = 'border-bottom-width: null;'
    
          expect('.all-text-inputs-active').to have_ruleset(ruleset)
    end
  end
    
            def success?
          @errors.nil? || @errors.empty?
        end
    
        sv.send(:install_main_process_signal_handlers)
    Net::HTTP.get URI.parse('http://0.0.0.0:24447/api/plugins.flushBuffers')
    info_msg = '[info]: force flushing buffered events' + '\n'
    
    module Fluent
  module Plugin
    class SyslogParser < Parser
      Plugin.register_parser('syslog', self)
    
          @opt_parser.banner = 'Usage: fluent-binlog-reader #{self.class.to_s.split('::').last.downcase} [options] file'