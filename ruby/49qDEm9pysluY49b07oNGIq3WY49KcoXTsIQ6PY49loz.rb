
        
          after do
    FileUtils.rm_rf(base_dir)
  end
    
          respond_to_on_destroy
    end
  end
    
        if successfully_sent?(resource)
      respond_with({}, location: after_sending_unlock_instructions_path_for(resource))
    else
      respond_with(resource)
    end
  end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
          # Set up a subject doing an I18n lookup. At first, it attempts to set a subject
      # based on the current mapping:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           user_subject: '...'
      #
      # If one does not exist, it fallbacks to ActionMailer default:
      #
      #   en:
      #     devise:
      #       mailer:
      #         confirmation_instructions:
      #           subject: '...'
      #
      def subject_for(key)
        I18n.t(:'#{devise_mapping.name}_subject', scope: [:devise, :mailer, key],
          default: [:subject, key.to_s.humanize])
      end
    end
  end
end

    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
          it 'does not process payload if no signature exists' do
        expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(nil)
        expect(ActivityPub::Activity).not_to receive(:factory)
    
    class DisallowedHashtagsValidator < ActiveModel::Validator
  def validate(status)
    return unless status.local? && !status.reblog?
    
    class Api::V1::PollsController < Api::BaseController
  include Authorization
    
        context 'when parent status is private' do
      let(:visibility) { 'private' }
    
    is_travis = ENV['TRAVIS_OS_NAME'] && !ENV['TRAVIS_OS_NAME'].empty?
    
          context 'and :python_package_name_prefix is nil/default' do
        it 'should prefix the package with 'python-'' do
          subject.input(example_dir)
          insist { subject.name } == 'python-example'
        end
      end
    
      config.vm.define 'centos7' do |centos7|
    centos7.vm.box = 'puppetlabs/centos-7.0-64-puppet'
  end
    
    
  class << self
    # This method is invoked when subclass occurs.
    #
    # Lets us track all known FPM::Package subclasses
    def inherited(klass)
      @subclasses ||= {}
      @subclasses[klass.name.gsub(/.*:/, '').downcase] = klass
    end # def self.inherited
    
        # pad out the result
    ret = pad_string_to(ret, TAR_CHUNK_SIZE)
    return ret
  end
    
      def self.default_prefix
    npm_prefix = safesystemout('npm', 'prefix', '-g').chomp
    if npm_prefix.count('\n') > 0
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned unexpected output.'
    elsif !File.directory?(npm_prefix)
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned a non-existent directory'
    end
    logger.info('Setting default npm install prefix', :prefix => npm_prefix)
    npm_prefix
  end
    
        # Final edit for lint check and packaging
    edit_file(manifest_fn) if attributes[:edit?]
    
        pear_cmd = 'pear -c #{config} remote-info #{input_package}'
    logger.info('Fetching package information', :package => input_package, :command => pear_cmd)
    name = %x{#{pear_cmd} | sed -ne '/^Package\s*/s/^Package\s*//p'}.chomp
    self.name = '#{attributes[:pear_package_name_prefix]}-#{name}'
    self.version = %x{#{pear_cmd} | sed -ne '/^Installed\s*/s/^Installed\s*//p'}.chomp
    self.description  = %x{#{pear_cmd} | sed -ne '/^Summary\s*/s/^Summary\s*//p'}.chomp
    logger.debug('Package info', :name => self.name, :version => self.version,
                  :description => self.description)
    
    require 'pleaserun/cli'