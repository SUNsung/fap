
        
            option_names.any? do |name|
      if option_defined? 'with-#{name}'
        include? 'with-#{name}'
      elsif option_defined? 'without-#{name}'
        !include? 'without-#{name}'
      else
        false
      end
    end
  end
    
      def bash_completion_caveats
    if keg && keg.completion_installed?(:bash) then <<-EOS.undent
      Bash completion has been installed to:
        #{HOMEBREW_PREFIX}/etc/bash_completion.d
      EOS
    end
  end
    
    # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install
    
            pretty = [new_lane]
        pretty = [current_platform, new_lane] if current_platform
        Actions.execute_action('Switch to #{pretty.join(' ')} lane') {} # log the action
        UI.message('Cruising over to lane '#{pretty.join(' ')}' 🚖')
    
          def self.details
        list = <<-LIST.markdown_list
          `grouping` is just to keep your tags organised under one 'folder', defaults to 'builds'
          `lane` is the name of the current fastlane lane
          `prefix` is anything you want to stick in front of the version number, e.g. 'v'
          `postfix` is anything you want to stick at the end of the version number, e.g. '-RC1'
          `build_number` is the build number, which defaults to the value emitted by the `increment_build_number` action
        LIST
    
            expect(result[1]).to eq('security default-keychain -s ~/Library/Keychains/test.keychain')
        expect(result[2]).to eq('security unlock-keychain -p testpassword ~/Library/Keychains/test.keychain')
    
          it 'handles extension and extensions parameters correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{rb,m,h}')
      end
    
    module Admin
  class EmailDomainBlocksController < BaseController
    before_action :set_email_domain_block, only: [:show, :destroy]
    
      def hub_topic
    params['hub.topic']
  end
    
      def process_salmon
    SalmonWorker.perform_async(@account.id, payload.force_encoding('UTF-8'))
  end
end

    
        render json: @web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
      platform_is_not :windows do
    it 'does not expand shell variables when given multiples arguments' do
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('#{@shell_var}\n')
    end
  end
    
      it 'calls #to_path on second argument when passed ?f and a filename' do
    p = mock('path')
    p.should_receive(:to_path).and_return @file
    Kernel.test(?f, p)
  end
    
        # @mixin a() { tr& { color:white } }
    # to:
    # @mixin a($parent) { tr#{$parent} { color: white } }
    def parameterize_mixin_parent_selector(file, rule_sel)
      log_transform rule_sel
      param = '$parent'
      replace_rules(file, '^\s*@mixin\s*' + rule_sel) do |mxn_css|
        mxn_css.sub! /(?=@mixin)/, '// [converter] $parent hack\n'
        # insert param into mixin def
        mxn_css.sub!(/(@mixin [\w-]+)\(([\$\w\-,\s]*)\)/) { '#{$1}(#{param}#{', ' if $2 && !$2.empty?}#{$2})' }
        # wrap properties in #{$parent} { ... }
        replace_properties(mxn_css) { |props|
          next props if props.strip.empty?
          spacer = ' ' * indent_width(props)
          '#{spacer}\#{#{param}} {\n#{indent(props.sub(/\s+\z/, ''), 2)}\n#{spacer}}'
        }
        # change nested& rules to nested#{$parent}
        replace_rules(mxn_css, /.*&[ ,:]/) { |rule| replace_in_selector rule, /&/, '\#{#{param}}' }
      end
    end
    
        def get_paths_by_type(dir, file_re, recursive = true)
      get_file_paths(dir, recursive).select { |path| path =~ file_re }
    end
    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def ready
          unless @shipment.ready?
            if @shipment.can_ready?
              @shipment.ready!
            else
              render 'spree/api/v1/shipments/cannot_ready_shipment', status: 422 and return
            end
          end
          respond_with(@shipment, default_template: :show)
        end
    
            private
    
            def get_store
          @store = Store.find(params[:id])
        end
    
            def update
          authorize! :update, user
          if user.update_attributes(user_params)
            respond_with(user, status: 200, default_template: :show)
          else
            invalid_resource!(user)
          end
        end
    
            def update
          authorize! :update, zone
          if zone.update_attributes(zone_params)
            respond_with(zone, status: 200, default_template: :show)
          else
            invalid_resource!(zone)
          end
        end