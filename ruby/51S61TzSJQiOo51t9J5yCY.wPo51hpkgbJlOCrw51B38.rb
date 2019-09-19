
        
          def test_numeric_fields
    m = NumericData.new(
      bank_balance: 1586.43,
      big_bank_balance: BigDecimal('1000234000567.95'),
      world_population: 2**62,
      my_house_population: 3
    )
    assert m.save
    
    RSpec.describe UrlValidator, type: :validator do
  describe '#validate_each' do
    before do
      allow(validator).to receive(:compliant?).with(value) { compliant }
      validator.validate_each(record, attribute, value)
    end
    
          next if existing_one.nil?
    
      describe 'reblogs' do
    let(:status)   { Fabricate(:status, account: Fabricate(:account)) }
    let(:activity) { Fabricate(:status, account: sender, reblog: status) }