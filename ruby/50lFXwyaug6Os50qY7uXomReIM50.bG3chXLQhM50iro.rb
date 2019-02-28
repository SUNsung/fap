
        
              class MergeRequest < ActiveRecord::Base
        self.table_name = 'merge_requests'
    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
              noteable_type =
            if matches[:type] == 'pull'
              'MergeRequest'
            else
              'Issue'
            end
    
              format('%020e', 109.52).should == '000000001.095200e+02'
          format('%020E', 109.52).should == '000000001.095200E+02'
          format('%020f', 10.952).should == '0000000000010.952000'
          format('%020g', 12.1234).should == '000000000000012.1234'
          format('%020G', 12.1234).should == '000000000000012.1234'
          format('%020a', 196).should == '0x000000000001.88p+7'
          format('%020A', 196).should == '0X000000000001.88P+7'
        end
    
      it 'raises an ArgumentError when passed a negative duration' do
    lambda { sleep(-0.1) }.should raise_error(ArgumentError)
    lambda { sleep(-1) }.should raise_error(ArgumentError)
  end
    
      it 'returns the previous seed value' do
    srand(10)
    srand(20).should == 10
  end
    
      after :each do
    Object.send :remove_method, :boom
  end
    
    group :development do
  cp_gem 'claide',                'CLAide'
  cp_gem 'cocoapods-core',        'Core'
  cp_gem 'cocoapods-deintegrate', 'cocoapods-deintegrate'
  cp_gem 'cocoapods-downloader',  'cocoapods-downloader'
  cp_gem 'cocoapods-plugins',     'cocoapods-plugins'
  cp_gem 'cocoapods-search',      'cocoapods-search'
  cp_gem 'cocoapods-stats',       'cocoapods-stats'
  cp_gem 'cocoapods-trunk',       'cocoapods-trunk'
  cp_gem 'cocoapods-try',         'cocoapods-try'
  cp_gem 'molinillo',             'Molinillo'
  cp_gem 'nanaimo',               'Nanaimo'
  cp_gem 'xcodeproj',             'Xcodeproj'
    
    (import 'mDNSResponder.sb')