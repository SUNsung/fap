
        
          # ==> Configuration for :encryptable
  # Allow you to use another hashing or encryption algorithm besides bcrypt (default).
  # You can use :sha1, :sha512 or algorithms from others authentication tools as
  # :clearance_sha1, :authlogic_sha512 (then you should set stretches above to 20
  # for default behavior) and :restful_authentication_sha1 (then you should set
  # stretches to 10, and copy REST_AUTH_SITE_KEY to pepper).
  #
  # Require the `devise-encryptable` gem when using anything other than bcrypt
  # config.encryptor = :sha512
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
        def default_used_route(options)
      singularizer = lambda { |s| s.to_s.singularize.to_sym }
    
      before do
    allow(machine).to receive(:guest).and_return(guest)
    
              logger = Log4r::Logger.new('vagrant::hosts::bsd')
          logger.info('Pruning invalid NFS entries...')
    
            machine.communicate.sudo(build_rsync_chown(opts))
      end
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
        # Returns a list of the machine names as well as the options that
    # were specified for that machine.
    #
    # @return [Hash<Symbol, Hash>]
    def machine_names_and_options
      {}.tap do |r|
        @config.vm.defined_vms.each do |name, subvm|
          r[name] = subvm.options || {}
        end
      end
    end
    
      describe '#pull' do
    it 'should pull images' do
      expect(subject).to receive(:execute).with('docker', 'pull', 'foo')
      subject.pull('foo')
    end
  end
    
              update = box.has_update?(version, download_options: download_options)
          if !update
            ui.success(I18n.t(
              'vagrant.box_up_to_date_single',
              name: box.name, version: box.version))
            return
          end