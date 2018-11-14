
        
        Nullam luctus fermentum est id blandit. Phasellus consectetur ullamcorper
ligula, at finibus eros laoreet id. Etiam sit amet est in libero efficitur.
tristique. Ut nec magna augue. {{ author }} Quisque ut fringilla lacus
Aliquam vel ornare mauris. Suspendisse ornare diam tempor nulla facilisis
aliquet. Sed ultrices placerat ultricies.
LIQUID
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
    Given(%r!^I have the following (draft|page|post)s?(?: (in|under) '([^']+)')?:$!) do |status, direction, folder, table|
  table.hashes.each do |input_hash|
    title = slug(input_hash['title'])
    ext = input_hash['type'] || 'markdown'
    filename = '#{title}.#{ext}' if %w(draft page).include?(status)
    before, after = location(folder, direction)
    dest_folder = '_drafts' if status == 'draft'
    dest_folder = '_posts'  if status == 'post'
    dest_folder = '' if status == 'page'
    
    def run_rubygem(args)
  run_in_shell('gem', *args.strip.split(' '))
end
    
      include SignatureVerification
    
        def set_user
      @user = Account.find(params[:account_id]).user || raise(ActiveRecord::RecordNotFound)
    end
    
        def paginated_instances
      filtered_instances.page(params[:page])
    end
    
            render template: 'admin/reports/show'
      end
    end
    
        describe '-' do
      it 'left-justifies the result of conversion if width is specified' do
        format('%-10b', 10).should == '1010      '
        format('%-10B', 10).should == '1010      '
        format('%-10d', 112).should == '112       '
        format('%-10i', 112).should == '112       '
        format('%-10o', 87).should == '127       '
        format('%-10u', 112).should == '112       '
        format('%-10x', 196).should == 'c4        '
        format('%-10X', 196).should == 'C4        '
    
      it 'accepts and uses a seed of 0' do
    srand(0)
    srand.should == 0
  end
    
      it 'sets the tainted bit' do
    o = Object.new
    o.taint
    o.tainted?.should == true
  end
    
        lambda {
      catch :blah do
        throw :blah, :return_value, 2, 3, 4, 5
      end
    }.should raise_error(ArgumentError)
  end
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end