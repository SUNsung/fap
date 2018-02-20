  # Asynchronously send an email
  class TestEmail < Jobs::Base
    
          def device_avalaible?(serial)
        load_all_devices
        return devices.map(&:serial).include?(serial)
      end
    
        def emails=(emails)
      @emails = emails ? emails.compact : nil
    end
    
          it 'does switch to plain text when xml is toggled off' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(xml: false)
          end').runner.execute(:test)
    
          expect('.size-auto').to have_ruleset(rule)
    end
  end
end
