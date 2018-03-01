
        
                # This is called early, before a machine is instantiated, to check
        # if this provider is installed. This should return true or false.
        #
        # If the provider is not installed and Vagrant determines it is
        # able to install this provider, then it will do so. Installation
        # is done by calling Environment.install_provider.
        #
        # If Environment.can_install_provider? returns false, then an error
        # will be shown to the user.
        def self.installed?
          # By default return true for backwards compat so all providers
          # continue to work.
          true
        end
    
    module Vagrant
  module Util
    # This class is used to render the ERB templates in the
    # `GEM_ROOT/templates` directory.
    class TemplateRenderer < OpenStruct
      class << self
        # Render a given template and return the result. This method optionally
        # takes a block which will be passed the renderer prior to rendering, which
        # allows the caller to set any view variables within the renderer itself.
        #
        # @return [String] Rendered template
        def render(*args)
          render_with(:render, *args)
        end
    
            self.description = <<-DESC
          Creates a scaffold for the development of a new Pod named `NAME`
          according to the CocoaPods best practices.
          If a `TEMPLATE_URL`, pointing to a git repo containing a compatible
          template, is specified, it will be used in place of the default one.
        DESC
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
      context 'called with argument (2)' do
    it 'outputs the second value from the default scale' do
      expect('.two-base-one').to have_rule('font-size: 1.5625em')
    end
  end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'padding-top: 11px; ' +
                'padding-right: 12px; ' +
                'padding-left: 13px;'
      bad_rule = 'padding-bottom: null;'
    
      context 'called with no prefixes' do
    it 'outputs the spec' do
      rule = 'appearance: none;'
    
      context 'called with two sizes' do
    it 'applies to height and width' do
      rule = 'height: 2em; width: 1em;'