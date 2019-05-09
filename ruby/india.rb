
        
            it 'shell-escapes environment variable values' do
      message = 'A message'
      path = '/usr/my local/bin'
      command = command_from_args({ 'PATH' => path }, 'git', 'commit', '-m', message)
      expect(command).to eq('PATH=#{path.shellescape} git commit -m #{message.shellescape}')
    end
    
    describe 'monkey patch of Array.shelljoin (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
      def after_omniauth_failure_path_for(scope)
    new_session_path(scope)
  end
    
      # DELETE /resource/sign_out
  def destroy
    signed_out = (Devise.sign_out_all_scopes ? sign_out : sign_out(resource_name))
    set_flash_message! :notice, :signed_out if signed_out
    yield if block_given?
    respond_to_on_destroy
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
        # Finds a machine where the UUID is prefixed by the given string.
    #
    # @return [Hash]
    def find_by_prefix(prefix)
      @machines.each do |uuid, data|
        return data.merge('id' => uuid) if uuid.start_with?(prefix)
      end
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
    module Vagrant
  module Plugin
    module V1
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered