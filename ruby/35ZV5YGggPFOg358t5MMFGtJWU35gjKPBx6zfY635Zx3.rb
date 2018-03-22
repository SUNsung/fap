
        
            # @abstract
    #
    # Identify the SHA of the commit that will be deployed.  This will most likely involve SshKit's capture method.
    #
    # @return void
    #
    def fetch_revision
      raise NotImplementedError, 'Your SCM strategy module should provide a #fetch_revision method'
    end
  end
end

    
          describe 'setting an internal regexp host filter' do
        subject { dsl.roles(:all) }
        it 'is ignored' do
          dsl.set :filter, host: /1/
          expect(subject.map(&:hostname)).to eq(%w{example1.com example2.com example3.com example4.com example5.com})
        end
      end