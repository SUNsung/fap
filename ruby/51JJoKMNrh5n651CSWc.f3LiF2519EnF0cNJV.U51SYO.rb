
        
            s = nil
    homebrew_site_packages = Language::Python.homebrew_site_packages
    user_site_packages = Language::Python.user_site_packages 'python'
    pth_file = user_site_packages/'homebrew.pth'
    instructions = <<-EOS.undent.gsub(/^/, '  ')
      mkdir -p #{user_site_packages}
      echo 'import site; site.addsitedir('#{homebrew_site_packages}')' >> #{pth_file}
    EOS
    
    def usage
  <<-EOS
list_running_app_ids [ -t <bundle-id> ]
    
          case matched
      when :webhost
        sessions[s[:session]].merge!({k => matches})
        if(s[:get])
          print_status('HTTP GET: #{s[:session]} http://#{s[:webhost]}#{s[:get]}')
          sessions.delete(s[:session])
          return
        end
      when nil
        # No matches, no saved state
      end # end case matched
    end # end of each_key
  end # end of parse
end # end of URL sniffer
    
            def yellow
          @color = :yellow
        end
      end
    
      # Convenience to access the current SSHKit backend outside of an `on` block.
  def backend
    SSHKit::Backend.current
  end
end

    
        # @abstract
    #
    # Your implementation should check if the specified remote-repository is
    # available.
    #
    # @return [Boolean]
    #
    def check
      raise NotImplementedError, 'Your SCM strategy module should provide a #check method'
    end
    
          describe 'setting an internal role filter' do
        subject { dsl.roles(:app) }
        it 'ignores it' do
          dsl.set :filter, role: :web
          expect(subject.map(&:hostname)).to eq(['example3.com', 'example4.com'])
        end
      end
    
            def show
          respond_with(stock_location)
        end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end