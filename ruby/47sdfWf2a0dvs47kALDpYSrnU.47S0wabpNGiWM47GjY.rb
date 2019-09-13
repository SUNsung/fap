
        
                it { expect(presenter.can_approve?).to eq(false) }
      end
    
      spec.summary       = %q{Provides access to information typically stored in UNIX /etc directory.}
  spec.description   = spec.summary
  spec.homepage      = 'https://github.com/ruby/etc'
  spec.license       = 'BSD-2-Clause'
    
        def test_gc_attrset
      assert_separately(['-r-test-/symbol', '-r-ext-/symbol/noninterned_name', '-'], '#{<<-'begin;'}\n#{<<-'end;'}')
      bug = '[ruby-core:62226] [Bug #9787]'
      include Test_Symbol::NonInterned
      names = Array.new(1000) {noninterned_name('gc')}
      names.each {|n| n.to_sym}
      GC.start(immediate_sweep: false)
      names.each do |n|
        eval(':#{n}=')
        assert_nothing_raised(TypeError, bug) {eval('proc{self.#{n} = nil}')}
      end
      begin;
      end;
    end
    
      it 'invokes seek method on the associated IO object' do
    # first, prepare the mock object:
    (obj = mock('io')).should_receive(:get_io).any_number_of_times.and_return(@io)
    def obj.read(args); get_io.read(args); end
    def obj.seek(pos, whence = 0)
      ScratchPad.record :seek
      get_io.seek(pos, whence)
    end
    
            it 'does not decrement pos' do
          @gz.ungetbyte nil
          @gz.pos.should == 0
        end
      end
    end
  end
    
          def warn_add_git_to_capfile
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] Future versions of Capistrano will not load the Git SCM
plugin by default. To silence this deprecation warning, add the following to
your Capfile after `require 'capistrano/deploy'`:
    
    __END__
    
      it_behaves_like 'any rack application'
    
          def string_to_code string
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
        # ascii only file names prevent UTF8 issues
    # when using git repos across operating systems
    # as this test demonstrates, translation is not
    # great
    assert_equal 'm-plus-F', 'μ†ℱ'.to_url
  end
    
    
    
      teardown do
    FileUtils.rm_r(File.join(File.dirname(__FILE__), *%w[examples test.git]))
  end
    
        # Ensure path begins with a single leading slash
    def clean_path(path)
      if path
        (path[0] != '/' ? path.insert(0, '/') : path).gsub(/\/{2,}/, '/')
      end
    end
    
          wiki = wiki_new
    
          # Takes the amount in cents to capture.
      # Can be used to capture partial amounts of a payment, and will create
      # a new pending payment record for the remaining amount to capture later.
      def capture!(amount = nil)
        return true if completed?
    
        alias get get_preference
    
    module Spree
  class ReturnItem::EligibilityValidator::Default < Spree::ReturnItem::EligibilityValidator::BaseValidator
    class_attribute :permitted_eligibility_validators
    self.permitted_eligibility_validators = [
      ReturnItem::EligibilityValidator::OrderCompleted,
      ReturnItem::EligibilityValidator::TimeSincePurchase,
      ReturnItem::EligibilityValidator::RMARequired,
      ReturnItem::EligibilityValidator::InventoryShipped,
      ReturnItem::EligibilityValidator::NoReimbursements
    ]
    
          def load_user
        @current_api_user = Spree.user_class.find_by(spree_api_key: api_key.to_s)
      end
    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
            def void
          perform_payment_action(:void_transaction)
        end
    
              if @product_property.update(product_property_params)
            respond_with(@product_property, status: 200, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end
    
      s.files         = Dir['lib/**/*', 'spec/**/*', 'bin/*', 'completion/*']
  s.executables   = s.files.grep(%r{^bin/}) { |f| File.basename(f) }
  s.test_files    = s.files.grep(%r{^(test|spec|features)/})
  s.require_paths = ['lib']
    
      it 'creates an instance' do
    expect(subject).to be_a(Tmuxinator::Pane)
  end
    
    require 'tmuxinator'
require 'factory_bot'
    
            # now generate a project file
        expect(described_class.new.generate_project_file(name, path)).to eq path
        expect(File).to exist path
    
        context 'environment variable $TMUXINATOR_CONFIG is nil' do
      it 'is an empty string' do
        allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').
          and_return nil
        # allow(XDG).to receive(:[]).with('CONFIG').and_return nil
        allow(File).to receive(:directory?).and_return true
        expect(described_class.environment).to eq ''
      end
    end