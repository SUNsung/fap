
        
              return class_ref
    end
    
          it 'adds docset_bundle_filename param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_bundle_filename: 'DocSet bundle filename'
          )
        end').runner.execute(:test)
    
          it 'bootstraps with a single dependency' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              command: 'bootstrap',
              dependencies: ['TestDependency']
            )
          end').runner.execute(:test)
    
    # confirms that the escaped string that is generated actually
# gets turned back into the source string by the actual shell.
# abuses a `grep` (or `find`) error message because that should be cross platform
def confirm_shell_unescapes_string_correctly(string, escaped)
  compare_string = string.to_s.dup
    
        describe 'when folders are specified in options' do
      let(:options) { { screenshots_path: './screenshots', metadata_path: './metadata' } }
    
        private_constant :AIR_APPLICATION_INSTALLER
    
      def test_each_char
    a = [e('\xa4\xa2'), 'b', e('\xa4\xa4'), 'c']
    s = '\xa4\xa2b\xa4\xa4c'.force_encoding('euc-jp')
    assert_equal(a, s.each_char.to_a, '[ruby-dev:33211] #{encdump s}.each_char.to_a')
  end
    
    def main
  @ruby = File.expand_path('miniruby')
  @verbose = false
  $VERBOSE = false
  $stress = false
  @color = nil
  @tty = nil
  @quiet = false
  dir = nil
  quiet = false
  tests = nil
  ARGV.delete_if {|arg|
    case arg
    when /\A--ruby=(.*)/
      @ruby = $1
      @ruby.gsub!(/^([^ ]*)/){File.expand_path($1)}
      @ruby.gsub!(/(\s+-I\s*)((?!(?:\.\/)*-(?:\s|\z))\S+)/){$1+File.expand_path($2)}
      @ruby.gsub!(/(\s+-r\s*)(\.\.?\/\S+)/){$1+File.expand_path($2)}
      true
    when /\A--sets=(.*)/
      tests = Dir.glob('#{File.dirname($0)}/test_{#{$1}}*.rb').sort
      puts tests.map {|path| File.basename(path) }.inspect
      true
    when /\A--dir=(.*)/
      dir = $1
      true
    when /\A(--stress|-s)/
      $stress = true
    when /\A--color(?:=(?:always|(auto)|(never)|(.*)))?\z/
      warn 'unknown --color argument: #$3' if $3
      @color = $1 ? nil : !$2
      true
    when /\A--tty(=(?:yes|(no)|(.*)))?\z/
      warn 'unknown --tty argument: #$3' if $3
      @tty = !$1 || !$2
      true
    when /\A(-q|--q(uiet))\z/
      quiet = true
      @quiet = true
      true
    when /\A(-v|--v(erbose))\z/
      @verbose = true
    when /\A(-h|--h(elp)?)\z/
      puts(<<-End)
Usage: #{File.basename($0, '.*')} --ruby=PATH [--sets=NAME,NAME,...]
        --sets=NAME,NAME,...        Name of test sets.
        --dir=DIRECTORY             Working directory.
                                    default: /tmp/bootstraptestXXXXX.tmpwd
        --color[=WHEN]              Colorize the output.  WHEN defaults to 'always'
                                    or can be 'never' or 'auto'.
    -s, --stress                    stress test.
    -v, --verbose                   Output test name before exec.
    -q, --quiet                     Don\'t print header message.
    -h, --help                      Print this message and quit.
End
      exit true
    when /\A-j/
      true
    else
      false
    end
  }
  if tests and not ARGV.empty?
    $stderr.puts '--tests and arguments are exclusive'
    exit false
  end
  tests ||= ARGV
  tests = Dir.glob('#{File.dirname($0)}/test_*.rb').sort if tests.empty?
  pathes = tests.map {|path| File.expand_path(path) }
    
      def self.compare_dump_and_load i1, dumper, loader
    dump = dumper.call(i1)
    return i1 unless dump
    i2 = loader.call(dump)
    
        def fit_error xys
      y_bar  = sigma(xys) { |x, y| y } / xys.size.to_f
      ss_tot = sigma(xys) { |x, y| (y    - y_bar) ** 2 }
      ss_err = sigma(xys) { |x, y| (yield(x) - y) ** 2 }
    
        metaclass = class << self; self; end
    
            def call_hook(id,*additional)
          @hooks[id] ||= []
          @hooks[id].each{|hook| hook[self,additional] }
          self
        end
    
          def link_to_clone_promotion(promotion, options = {})
        options[:data] = { action: 'clone', 'original-title': Spree.t(:clone) }
        options[:class] = 'btn btn-warning btn-sm with-tip'
        options[:method] = :post
        options[:icon] = :clone
        button_link_to '', clone_admin_promotion_path(promotion), options
      end
    
              if Cart::Update.call(order: @order, params: order_params).success?
            user_id = params[:order][:user_id]
            if current_api_user.has_spree_role?('admin') && user_id
              @order.associate_user!(Spree.user_class.find(user_id))
            end
            respond_with(@order, default_template: :show)
          else
            invalid_resource!(@order)
          end
        end
    
          @@address_attributes = [
        :id, :firstname, :lastname, :full_name, :address1, :address2, :city,
        :zipcode, :phone, :company, :alternative_phone, :country_id, :state_id,
        :state_name, :state_text
      ]