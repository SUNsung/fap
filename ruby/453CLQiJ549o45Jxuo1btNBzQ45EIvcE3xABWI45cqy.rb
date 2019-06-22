def envygeeks(url)
  return url if url.end_with?(FORWARD_SLASH) || url == FORWARD_SLASH
    
            def log_error(error)
          Jekyll.logger.error 'LiveReload experienced an error. ' \
            'Run with --trace for more information.'
          raise error
        end
      end
    end
  end
end

    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
          def jekyll
        JekyllDrop.global
      end
    
    module Vagrant
  module Plugin
    module V1
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
              # If we asked for reversed ordering, then reverse it
          machines.reverse! if options[:reverse]
    
        def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
      private
    
      private
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
      included do
    before_action :authenticate_user!
    before_action :load_export
  end
    
    module SessionTrackingConcern
  extend ActiveSupport::Concern
    
      included do
    before_action :set_user_activity
  end
    
    class RemoteUnfollowsController < ApplicationController
  layout 'modal'
    
            private
    
          def markdown_podfile
        UI::ErrorReport.markdown_podfile
      end
    
                UI.puts 'Analyzed #{report.analyzed_paths.count} podspecs files.\n\n'
            if report.pods_by_error.count.zero?
              UI.puts 'All the specs passed validation.'.green << '\n\n'
            else
              raise Informative, '#{report.pods_by_error.count} podspecs failed validation.'
            end
          end
        end
      end
    end
  end
end

    
                result = next_service.call(order: spree_current_order)
    
        extract_info(input_path)
    
        return @architecture
  end # def architecture
    
        logger.info('Installing pear package', :package => input_package,
                  :directory => staging_path)
    ::Dir.chdir(staging_path) do
      safesystem('pear', '-c', config, 'install', '-n', '-f', input_package)
    end
    
    end
    
      # Sanitize package name.
  # Some PyPI packages can be named 'python-foo', so we don't want to end up
  # with a package named 'python-python-foo'.
  # But we want packages named like 'pythonweb' to be suffixed
  # 'python-pythonweb'.
  def fix_name(name)
    if name.start_with?('python')
      # If the python package is called 'python-foo' strip the 'python-' part while
      # prepending the package name prefix.
      return [attributes[:python_package_name_prefix], name.gsub(/^python-/, '')].join('-')
    else
      return [attributes[:python_package_name_prefix], name].join('-')
    end
  end # def fix_name
    
      def install_script
    path = build_path('installer.sh')
    File.open(path, 'w') do |file|
      file.write template('sh.erb').result(binding)
    end
    path
  end
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
      private