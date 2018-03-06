
        
                expect(result).to eq('/usr/local/bin/cloc --exclude-dir=test1,test2,build --by-file --xml  --out=build/cloc.xml')
      end
    
          it 'gets the correct version number for 'TargetB'' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_version_number(xcodeproj: '.xcproject', target: 'TargetB')
        end').runner.execute(:test)
        expect(result).to eq('5.4.3')
      end
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER]).to match(/cd .* && agvtool new-version -all 24 \&\& cd \-/)
      end
    end
  end
end

    
          def report
        <<-EOS
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end
